#include "main.h"

/**
 *  _strncpy - copies
 *  * @dest: copy source to this buffer
 *  @src: this is the source to copy
 *  @n: n bytes to be copied
 *  Return: copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	for ( ; i < n ; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
