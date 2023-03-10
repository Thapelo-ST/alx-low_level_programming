#include "main.h"

/**
 * _strcpy - function that copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest.
 *
 * @dest: the variable pointer at dest
 * @src: the variable pointer at src
 * Description: Copy the string pointed to by pointer src to
 * the buffer pointed to by dest
 *
 * Return: return dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
