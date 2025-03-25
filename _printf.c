#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stddef.h>
/**
 * _printf - Custom printf function that handles certain format specifiers
 * @format: The format string containing format specifiers
 *
 * Return: The number of characters printed (excluding the null byte).
 */
int _printf(const char *format, ...)
{
	int i = 0, j = 0, find_spec = 0, count = 0;
	va_list args;
	specifiers arr[] = {
	    {'s', Type_s}, {'c', Type_c}, {'%', Type_p}, {'\0', NULL}};

	if (!format)
		return (-1);
	va_start(args, format);

	while (format[i])
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
					count += arr[j].print_func(&args);
					find_spec = 1;
					break; }
				j++; }
			if (!find_spec)
			{
				_putchar('%');
				count++;
				_putchar(format[i]);
				count++; }}
		else
		{
			_putchar(format[i]);
			count++; }
		i++; }
	va_end(args);
	return (count); }
