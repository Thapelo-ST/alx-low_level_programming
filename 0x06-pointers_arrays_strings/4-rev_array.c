#include "main.h"

/**
 * reverse_array - reverses the contents of an array
 * @a: integer array to be reversed
 * @n: number of elements in array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, tmp;

	n = n - 1;
	i = 0;
	while (i < n)
	{
		tmp = *(a + i);
		*(a + i) = *(a + n);
		*(a + n) = tmp;
		i++;
		n--;
	}
}
