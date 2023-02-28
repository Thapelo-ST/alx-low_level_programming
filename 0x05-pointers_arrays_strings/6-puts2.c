#include <stdio.h>
#include "main.h"

/**
 * _strlen - Computes the length of a string
 * @s: The string to compute the length of
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}

/**
 * puts2 - Prints every other character of a string, starting with the first
 * character, followed by a new line
 * @str: The string to print characters from
 */
void puts2(char *str)
{
	int i, len;

	len = _strlen(str);

	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
