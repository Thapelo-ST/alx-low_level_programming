#include <stdio.h>

/**
 * int_index - searches for an integer in an array
 *
 * @array: a pointer to an integer array
 * @size: the number of elements in the array
 * @cmp: a ptr to a func that takes an int as an arg and returns an int
 *
 * Return: the i of the first elmt for which the cmp func does not return 0,
 *         or -1 if no element matches or size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
