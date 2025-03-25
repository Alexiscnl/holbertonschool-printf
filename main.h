#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stddef.h>

int _printf(const char *format, ...);
int _putchar(char c);
int _strlen(const char *s);
int _strncmp(const char *s1, const char *s2, size_t n);
char *_strncat(char *dest, char *src, int n);
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
	char type;
	int (*print_func)(va_list *args);
} specifiers;

#endif
