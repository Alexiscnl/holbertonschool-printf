#!/bin/bash

# Check if the script is being executed with root privileges (to install the man page)
if [ "$(id -u)" -ne 0 ]; then
  echo "This script must be run as a superuser (root)."
  exit 1
fi

# Path to the cloned repository
REPO_PATH=$(pwd)

# Path to the man page file in the repo
MAN_PAGE="$REPO_PATH/man_3_printf.3"

# Check if the man page file exists
if [ ! -f "$MAN_PAGE" ]; then
  echo "The man_3_printf.3 file was not found in the current directory."
  exit 1
fi

# Copy the man page to the man3 directory
echo "Installing the man page..."
cp "$MAN_PAGE" /usr/local/share/man/man3/_printf.3

# Update the man page database
echo "Updating the man page database..."
mandb

# Display a success message
echo "The man page has been successfully installed. You can now use 'man _printf' to view the man page."

# End of the script
exit 0
