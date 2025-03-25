#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stddef.h>

int _printf(const char *format, ...);
int _putchar(char c);
int Type_s(va_list *args);
int Type_c(va_list *args);
int Type_mod(va_list *args);
int Type_d(va_list *args);
int Type_i(va_list *args);

#endif
