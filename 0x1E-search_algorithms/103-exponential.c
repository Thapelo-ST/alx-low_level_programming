#include "search_algos.h"
/**
 * exponential_search - ...
 * @array: ...
 * @size: ...
 * @value: ...
 *
 * Return: ...
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound, low, high, mid, i;
	int v_mid;

	if (array == NULL || size == 0)
		return (-1);
	bound = 1;
	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}
	low = bound / 2;
	high = (bound < size) ? bound : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", low, high);
	while (low <= high)
	{
		mid = low + (high - low) / 2;
		v_mid = array[mid];
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i < high)
				printf(", ");
		}
		printf("\n");
		if (v_mid == value)
		{
			return (mid);
		}
		else if (v_mid < value)
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}
	return (-1);
}
