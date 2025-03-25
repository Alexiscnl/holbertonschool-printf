#ifndef SPECIFIEUR_H
#define SPECIFIEUR_H
#include <stdarg.h>

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

extern specifiers arr[];

#endif

