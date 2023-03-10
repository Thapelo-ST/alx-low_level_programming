#include "main.h"

/**
 * _strlen - get the length of a str
 * @s: string
 * Return: returns length
 */

int _strlen(char *s)
{
	int j;

	for (j = 0; s[j] != '\0'; j++)
	{}
	return (j);
}
