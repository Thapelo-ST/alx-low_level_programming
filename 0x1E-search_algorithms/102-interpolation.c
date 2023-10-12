#include "search_algos.h"

/**
 * interpolation_search - ...
 * @array: ...
 * @size: ...
 * @value: ...
 *
 * Return: ...
 */

int interpolation_search(int *array, size_t size, int value)
{
	int pos, low = 0;
	int probe, high = size - 1;

	while (low <= high && value >= array[low] && value <= array[high])
	{
		if (low == high)
		{
			if (array[low] == value)
			{
				printf("Value checked array[%d] = %d\n", low, array[low]);
				return (low);
			}
			printf("Value checked array[%d] is out of range\n", low);
			return (-1);
		}

		pos = low + (((double)(high - low) / array[high] - array[low]))
			* (value - array[low]);
		probe = array[pos];
		/* value out of range */
		if ((size_t)probe < 0 || (size_t)probe >= size - 1)
		{
			printf("Value checked array[%d] is out of range\n", pos);
			return (-1);
		}
		printf("Value checked array[%d] = %d\n", pos, probe);

		if (probe == value)
			return (pos);

		if (probe < value)
		{
			low = pos + 1;
		}
		else
		{
			high = pos - 1;
		}
	}
	return (-1);
}
