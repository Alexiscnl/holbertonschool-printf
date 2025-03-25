#include <stdarg.h>
#include <stdio.h>
#include "main.h"
#include <unistd.h>
#include "specifieur.h"

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
	while (s[i])
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
 * Type_mod - Prints the '%' character
 * @args: A pointer to the list of arguments (unused)
 *
 * Return: Always returns 1 (one character printed).
 */
int Type_mod(va_list *args)
{
	(void)args;
	_putchar('%');
	return (1);
}

/**
 * Type_d - Prints an integer
 * @args: A pointer to the list of arguments
 *
 * Description: This function retrieves an integer from the argument list,
 * handles negative numbers, and prints the digits individually.
 * It returns the total number of characters printed.
 *
 * Return: The number of characters printed.
 */
int Type_d(va_list *args)
{
	int num = va_arg(*args, int);
	int count = 0;
	int j;
	int num_arr[10];
	int i = 0;

	if (num == "-2147483648")
	{
		char *min = "-2147483648";
		for (; min[i]; i++)
		{
			_putchar(min[i]);
			count++;
		}
		return (count);
	}
	if (num == "2147483648")
	{
		char *max = "2147483648";
		for (; max[i]; i++)
		{
			_putchar(max[i]);
			count++;
		}
		return (count);
	}
	if (num < 0)
	{
		_putchar('-');
		count++;
		num = -num;
	}
	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	while (num > 0)
	{
		num_arr[i++] = num % 10;
		num /= 10;
	}

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(num_arr[j] + '0');
		count++;
	}
	return (count);
}
