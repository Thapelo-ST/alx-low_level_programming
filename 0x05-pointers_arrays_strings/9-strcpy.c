#include "main.h"
#include <stdio.h>

/**
 * _strcpy - pointer to char function that copies strings
 * @dest: destination pointer to the char
 * @src: source pointer to char
 * Return: copied string from source to destination
 */

char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (start);
}
