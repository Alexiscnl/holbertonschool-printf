#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stddef.h>

int _printf(const char *format, ...);
int _putchar(char c);
int Type_s(va_list *args);
int Type_c(va_list *args);
int Type_p(va_list *args);

/**
 * struct arr_specifiers - Struct to associate format specifiers with functions
 * @type: The format specifier character (e.g., 'c', 's', '%')
 * @print_func: A function pointer to handle the corresponding format specifier
 *
 */
typedef struct arr_specifiers
{
	int type;
	int (*print_func)(va_list *args);
} specifiers;

#endif
