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
	int i = 0, j = 0, count = 0, find_spec = 0;

	specifiers arr[] = {
	    {'s', Type_s}, {'c', Type_c}, {'%', Type_p}, {'\0', NULL}};
	va_list args;

	if (!format)
		return (-1);
	va_start(args, format);
	for (; format && format[i]; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
			{
				va_end(args);
				return (-1); }
			find_spec = 0;
			i++;
			for (j = 0; arr[j].type; j++)
			{
				if (format[i] == arr[j].type)
				{
					count += arr[j].print_func(&args);
					find_spec = 1;
					break; } }
			if (!find_spec)
			{
				_putchar('%');
				count++;
				_putchar(format[i]);
				count++; } }
		else
		{
			_putchar(format[i]);
			count++; } }
	va_end(args);
	return (count); }
