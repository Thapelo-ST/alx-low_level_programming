#include "main.h"

/**
 * _memcpy - copies from source
 * @dest: destination to copy to
 * @src: source to copy from
 * @n: n amount of times
 * Return: return the string value
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
