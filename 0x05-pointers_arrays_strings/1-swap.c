#include <stdio.h>

/**
 * swap_int - swaps a and b
 *
 * @a: a pointer to an integer
 *
 * @b: a pointer to an integer
 *
 * Description: This function swaps numbers a and b using tmp as a
 *              temporal storage.
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
