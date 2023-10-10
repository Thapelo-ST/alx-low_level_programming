#include "search_algos.h"
/**
 * binary_search - ...
 * @array: ...
 * @size: ...
 * @value: ...
 * Return: ...
 */

int binary_search(int *array, size_t size, int value)
{
	/*int lft, mid;*/
	size_t i, lft, mid, rgt;

	lft = 0;
	rgt = size - 1;
	while (lft <= rgt)
	{

		mid = lft + (rgt - lft) / 2;
		printf("Searching in array: ");
		for (i = lft; i <= rgt; i++)
		{
			if (i == rgt)
			{
				printf("%d", array[i]);
			}
			else
			{
				printf("%d, ", array[i]);
			}
		}
		printf("\n");
		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			lft = mid + 1;
		}
		else
		{
			rgt = mid - 1;
		}
	}
	return (-1);
}
