#include <stdio.h>

/**
 * main - entry point
 * Return: always 0 (succces)
 */

int main(void)
{
	int n1 = 1, n2 = 2, next;
	int i;

	printf("%d, %d, ", n1, n2);

	for (i = 2; i < 50; i++)
	{
		next = n1 + n2;
		printf("%d", next);
		if (i < 49)
		{
			printf(", ");
		}
		n1 = n2;
		n2 = next;
	}

	printf("\n");

	return (0);
}
