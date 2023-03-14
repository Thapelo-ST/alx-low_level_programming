#include "main.h"

/**
 * _strdup - function that returns a pointer to newly allocated space in memory
 * @str: string to duplicate
 *
 * Return: pointer to duplicated string in allocated memory
 */

char *_strdup(char *str)
{
	char *cstr;

	if (str == NULL)
	{
		return (NULL);
	}
	cstr = malloc(_strlen(str) + 1);
	if (cstr == NULL)
	{
		return (NULL);
	}
	_strcpy(cstr, str);
	return (cstr);
}
