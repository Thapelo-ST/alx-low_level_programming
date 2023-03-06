#include "main.h"

/**
 * _strchr - locate character in string
 * @s: string to locate char
 * @c: character to find
 * Return: character value
 */



char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	if (s[i] == c)
		return (s + i);
	return (0);
}
