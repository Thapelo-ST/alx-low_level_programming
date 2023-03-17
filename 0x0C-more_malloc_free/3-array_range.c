#include "main.h"

/**
 * array_range - create array of integers
 * @min: start range from
 * @max: end range at
 *
 * Return: pointer to array
 */

int *array_range(int min, int max)
{
	int i, size;
	int *arr;

	/*checking for invalid input*/
	if (min < 0 || max < 0)
	{
		return (NULL);
	}
	/*check if min is greater than max*/
	if (min > max)
	{
		return (NULL);
	}
	/*calculate size of array*/
	size = max - min + 1;
	/*creating an array of numbers from min to max*/
	arr = (int *)malloc(sizeof(*arr) * size);
	/*checking if arr is valid*/
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}
	/*filling the array from min to max*/
	for (i = 0; i < size; i++)
	{
		arr[i] = min + i;
	}
	/*returning array*/
	return (arr);
}
