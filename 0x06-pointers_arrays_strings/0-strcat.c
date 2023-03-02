#include "main.h"

/**
 * _strcat - concatenates two strings removing the null-byte on dest
 *          and putting it after concatenating.
 * @dest: destination string.
 * @src: source string
 *
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int dlen = _strlen(dest);
	int i = 0;

	while (src[i] != '\0')
	{
		dest[dlen + i] = src[i];
		i++;
	}
	dest[dlen + i] = '\0';
	return (dest);
}
