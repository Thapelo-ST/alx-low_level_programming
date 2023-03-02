#include "main.h"

/**
 * reverse_array - reverses the contents of an array
 * @a: integer array to be reversed
 * @n: @n: number of elements in array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i = n - 1;
	int tmp;

	while (i < n)
	{
		t = *(a + i);
		*(a + i) = *(a + n);
		*(a + n) = t;
		i++;
		n--;
	}
	_putchar('\n');
}
