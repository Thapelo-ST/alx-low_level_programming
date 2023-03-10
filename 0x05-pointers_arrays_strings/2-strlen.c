#include <stdio.h>

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
