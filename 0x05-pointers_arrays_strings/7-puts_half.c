#include <stdio.h>
#include "main.h"


/**
 * _strlen - checks string length
 *
 * @s: a pointer to a char
 *
 * Return: length of string.
 *
 * Description: This function checks how long is the string and returns the
 *              length of the string.
 */

int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	return (l);
}

/**
 * puts_half - Prints the second half of a string, followed by a new line.
 *
 * @str: A pointer to the first character of the string.
 */
void puts_half(char *str)
{
	int len = _strlen(str);
	int n = (len % 2 == 0) ? len / 2 : (len - 1) / 2 + 1;
	int i;

	for (i = n; i < len; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
