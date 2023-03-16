#include "main.h"

/**
 * _calloc - function that allocates memory for an array,
 * @nmemb: number of elements
 * @size: size of bytes
 *
 * Return: pointer or void
 */

void *_calloc(unsigned int nmeb, unsigned int size)
{
	unsigned int i;
	void *ptr;
	char *byte_ptr;

	/*checking for invalid input*/
	if (nmeb == 0 || size == 0)
	{
		return (NULL);
	}
	/*malloc function*/
	ptr = malloc(nmeb * size);
	/*checking if size is 0*/
	if (ptr == NULL)
	{
		return (NULL);
	}
	/*setting memory to 0*/
	byte_ptr = (char *)ptr;
	for (i = 0; i < (nmeb *size); i++)
	{
		*byte_ptr++ = 0;
	}

	return (ptr);
}
