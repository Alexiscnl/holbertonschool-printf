#include <stdarg.h>
#include <stdio.h>
#include "main.h"
#include <unistd.h>
/**
 * Type_s - Prints a string
 * @args: A pointer to the list of arguments
 *
 * Return: The number of characters printed.
 */
int Type_s(va_list *args)
{
	int i = 0;
	char *s = va_arg(*args, char *);

	if (s == NULL)
	{
		s = "(null)";
	}
	while (s && s[i])
	{
		_putchar(s[i]);
		i++;
	}
	return (i);
}
/**
 * Type_c - Prints a single character
 * @args: A pointer to the list of arguments
 *
 * Return: Always returns 1 (one character printed).
 */
int Type_c(va_list *args)
{
	char c = va_arg(*args, int);

	_putchar(c);
	return (1);
}
/**
 * Type_p - Prints the '%' character
 * @args: A pointer to the list of arguments (unused)
 *
 * Return: Always returns 1 (one character printed).
 */
int Type_p(va_list *args)
{
	(void)args;
	_putchar('%');
	return (1);
}
