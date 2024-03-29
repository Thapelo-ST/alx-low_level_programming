#include "main.h"

/**
 * _realloc - allocate memory and set all values to 0
 * @ptr: pointer to the memory previously allocated (malloc(old_size))
 *
 * @old_size: size previously allocated
 * @new_size: new size to reallocate
 *
 * Return: pointer to the new array.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *new_ptr = NULL;
	char *p1, *p2;

	p1 = ptr;
	/* If new_size is zero, free the memory and return NULL */
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	/* If ptr is NULL, just allocate new memory */
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
		{
			return (NULL);
		}
	}
	else
	{
		/* Allocate new memory and copy the contents of old memory */
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
		{
			return (NULL);
		}
		/* Copy the contents of the old memory */
		p2 = new_ptr;
		for (i = 0; i < old_size && i < new_size; i++)
		{
			p2[i] = p1[i];
		}
		/* Free the old memory */
		free(ptr);
	}
	return (new_ptr);
}
