#include <stdio.h>

/**
 * main - entry stream for finding fibonacci numbers
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = 98;
	int a = 1, b = 2, c;

	printf("%d, %d, ", a, b);

	for (int i = 3; i <= n; i++)
	{
		c = a + b;
		printf("%d", c);
		if (i != n)
		{
			printf(", ");
		}
		a = b;
		b = c;
	}

	printf("\n");

	return (0);
}
