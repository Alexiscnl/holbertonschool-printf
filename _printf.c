#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stddef.h>
/**
 * _printf - Produces output according to a format
 * @format: The format string containing format specifiers
 *
 * Return: The number of characters printed (excluding the null byte)
 */
int _printf(const char *format, ...)
{
	int i = 0, j = 0, find_spec = 0;
	char count = 0;

	specifiers arr[] = {
	    {'s', Type_s}, {'c', Type_c}, {'%', Type_p}, {'\0', NULL}};
	va_list args;

	va_start(args, format);
	while (format && format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			j = 0;
			find_spec = 0;
			i++;
			while (arr[j].type)
			{
				if (format[i] == arr[j].type)
				{
					count = count + arr[j].print_func(&args);
					find_spec = 1;
					break; }

				j++;
			}
			if (!find_spec)
			{
				_putchar('%');
				_putchar(format[i]);
				count = count + 2; }
		}
		else
		{
			_putchar(format[i]);
			count++; }
		i++;
	}
	va_end(args);
	return (count);
}
