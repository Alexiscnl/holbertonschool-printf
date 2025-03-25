#include <unistd.h>
#include <stdio.h>
#include <stddef.h>

/**
 * _strlen - calculates the lenght pf a string
 *@s: Pointer to the string
 *
 * Return: the lenght of the string
 */
int _strlen(const char *s)
{
	int lenght = 0;

	while (s && *s++)
	{
		lenght++;
	}
	return (lenght);
}
/**
 * _strncmp - Compares two strings
 * @s1: First string to compare
 *@s2: Second string to compare
 *@n: size of the array in bytes
 *
 * Return: *s1 - *s2
 */
int _strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i = 0;

	while (i < n && s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	if (i < n)
	{
		return (s1[i] - s2[i]);
	}
	return (0);
}
/**
 * *_strncat - Concatenates two strings that will uses n bytes from src
 * @dest: First string
 * @src: Second string
 * @n: n bytes
 *
 * Return: temp
 */
char *_strncat(char *dest, char *src, int n)
{
	char *temp = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (n > 0 && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';
	return (temp);
}
