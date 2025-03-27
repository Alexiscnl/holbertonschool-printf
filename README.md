<p align="center">
   <img src="https://github.com/user-attachments/assets/7d564981-cb81-43e7-819a-25ffcfc5bd72" width=40% height=40%/>
</p>

# C - printf Project

## Table of Contents
- [Project Description](#-project-description)
- [Requirements](#-requirements)
- [Features](#-features)
- [Usage](#-usage)
- [Project Structure](#-project-structure)
- [Man Page Installation](#-man-page-installation)
- [Current Limitations](#-current-limitations)
- [Recommended Development Process](#-recommended-development-process)
- [Flowchart](#-flowchart)
- [Authors](#-authors)

## 📝 Project Description
This project is a custom implementation of the standard C library `printf` function, developed as part of a learning exercise in low-level programming and system design. The `_printf` function provides formatted output conversion with a subset of standard printf functionality.

## 🛠 Requirements
### General
- **Allowed Editors**: `vi`, `vim`, `emacs`
- **Compilation Environment**: Ubuntu 20.04 LTS
- **Compiler**: GCC with specific flags

### Compilation Flags
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
```

### Code Standards
- All files must end with a new line
- Use Betty coding style (checked with `betty-style.pl` and `betty-doc.pl`)
- No global variables allowed
- Maximum of 5 functions per file
- All function prototypes in `main.h`
- Header files must use include guards

### Authorized Functions
- `write()`
- `malloc()`
- `free()`
- `va_start()`
- `va_end()`
- `va_copy()`
- `va_arg()`

## ✨ Features
- Custom implementation of `printf`
- Supports multiple format specifiers:
  - `%c`: Character printing
  - `%s`: String printing
  - `%d` and `%i`: Integer printing
  - `%%`: Percent sign printing

## 🚀 Usage
### Test file
<img src="https://github.com/user-attachments/assets/b205c6bc-5388-4c28-beca-acefb8441510" width=40% height=40%> 

### Output
<img src="https://github.com/user-attachments/assets/32c6fab5-6f6f-48a9-b8f8-a39144a4a15b">

## 📦 Project Structure
- `_printf.c`: Main printf implementation
- `specifieur.c`: Format specifier handler functions
- `array.c`: Specifier-to-function mapping
- `main.h`: Header file with function prototypes
- `specifieur.h`: Specifier struct definition

## 📖 Man Page Installation
### Prerequisites
- Git
- Superuser (root) access
- Basic terminal knowledge

### Installation Steps
#### 1. Clone the Repository
```bash
git clone https://github.com/your-username/your-repository.git
cd your-repository
```

#### 2. Prepare the Installation Script
```bash
chmod +x install_man_page.sh
```

#### 3. Run the Installation Script
```bash
sudo ./install_man_page.sh
```

#### Verifying Installation
```bash
man _printf
```

### Troubleshooting
- Ensure necessary permissions
- Verify script location
- Check `mandb` installation

### Uninstallation
```bash
sudo rm /usr/local/share/man/man3/man_3_printf.3
sudo mandb
```

## 🔍 Current Limitations
- Limited format specifier support
- No floating-point number handling
- Basic error management

## 📋 Recommended Development Process
1. Implement basic functionality
2. Create thorough test cases
3. Handle edge cases
4. Optimize and refactor
5. Ensure Betty style compliance

## 🔄 Flowchart

<img src="https://github.com/user-attachments/assets/c032a2e0-4bc8-4c39-9c92-5928148a094f">

## 👥 Authors
- [Alexiscnl](https://github.com/Alexiscnl)
- [P-Y74](https://github.com/P-Y74)
