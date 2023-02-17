#include <stdio.h>

/**
 * main -entry stream
 * Return: always 0 (Success)
 */

int main(void)
{
	int count = 0;

	while (count < 10)
	{
		printf(count);
		count++;
	}
	putchar('\n');

	return (0);
}
