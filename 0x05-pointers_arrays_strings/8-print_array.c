#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array of integers,
 *               followed by a new line
 * @a: pointer to the array
 * @n: number of elements to be printed
 */

void print_array(int *a, int n)
{
	if (n > 0)
	{
		printf("%d", *a);
		a++;
		n--;
	}

	while (n > 0)
	{
		printf(", %d", *a);
		a++;
		n--;
	}

	printf("\n");
}
