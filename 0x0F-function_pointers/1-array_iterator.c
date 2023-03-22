#include <stdio.h>

/**
 * array_iterator - executes a function on each element of an array
 *
 * @array: a pointer to an integer array
 * @size: the size of the array
 * @action: a ptr to a function that takes an int arg and returns void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && action != NULL)
	{
		for (size_t i = 0; i < size; i++)
			action(array[i]);
	}
}
