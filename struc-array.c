#include "main.h"
/**
 ** arr - Array of format specifiers and their corresponding functions
 *
 * Description: This array stores the format specifiers supported
 * by _printf along with the function pointers to handle them.
 * It includes:
 * - 's' for strings
 * - 'c' for characters
 * - '%' for the percent sign
 * The last element is a null terminator to mark the end of the array.
 */
specifiers arr[] = {
	{'s', Type_s},
	{'c', Type_c},
	{'%', Type_p},
	{'\0', NULL}};
    va_list args;
