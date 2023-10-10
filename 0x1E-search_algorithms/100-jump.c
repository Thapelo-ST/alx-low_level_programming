#include "search_algos.h"
/**
 * jump_search - ...
 * @array: ...
 * @size: ...
 * @value: ...
 *
 * Return: ...
 */


int jump_search(int *array, size_t size, int value)
{
	size_t jump, left, right, i;

	jump = sqrt(size);
	left = 0;
	right = jump;

	printf("Value checked array[%lu] = [%d]\n", left, array[left]);
	while (right < size && array[right] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", right, array[right]);
		left = right;
		right += jump;
	}
	printf("Value found between array[%lu] and [%lu] \n", left, right);
	for (i = left; i <= right && i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
