#include "main.h"

/**
 * create_array - create array of chars and initialize with a specific char
 * @size: elements in the array
 * @c: char
 *
 * Return: pointer to array
 */

char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}
	char *arr;

	arr = malloc(size * sizeof(char));
	if (arr == NULL)
	{
		return (NULL);
	}
	unsigned int i;

	i = 0;
	while (i < size)
	{
		arr[i] = c;
		i++;
	}
	return (arr);
}
