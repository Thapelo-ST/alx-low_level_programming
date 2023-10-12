#include "search_algos.h"

/**
 * advanced_binary - ...
 * @array: ...
 * @size: ...
 * @value: ...
 * Return: ...
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}

/**
 * advanced_binary_recursive - ...
 * @array: ...
 * @left: ...
 * @right: ...
 * @value: ...
 * Return: ...
 */
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t mid, i;
	int v_mid;

	if (left <= right)
	{
		mid = left + (right - left) / 2;
		v_mid = array[mid];

		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(", ");
		}
		printf("\n");

		if (v_mid == value)
		{
			if (mid == left || array[mid - 1] != value)
				return (mid);
		}
		if (v_mid >= value)
			return (advanced_binary_recursive(array, left, mid, value));
		else
			return (advanced_binary_recursive(array, mid + 1,
											  right, value));
	}
	return (-1);
}
