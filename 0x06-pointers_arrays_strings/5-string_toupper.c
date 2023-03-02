#include "main.h"

/**
 * string_toupper - capitalize all letters in string
 * @str: string to manipulate
 *
 * Return: string
 */

char *string_toupper(char *str)
{
	char *p = str;

	while (*p)
	{
		if (*p >= 'a' && *p <= 'z')
			*p = (*p - 'a') + 'A';
		p++;
	}
	return (str);
}
