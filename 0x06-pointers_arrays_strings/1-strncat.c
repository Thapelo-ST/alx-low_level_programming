#include "main.h"

/**
 * _strncat - concatenate n bytes to destination string
 * @dest: string to be appended to
 * @src: string to append
 * @n: append n number of bytes(chars)
 * Return: pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
