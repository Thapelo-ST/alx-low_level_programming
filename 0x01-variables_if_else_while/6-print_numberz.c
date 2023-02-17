#include <stdio.h>

/**
 * main - entry stream
 * Return: Always 0 (success)
 */

int main(void)
{
	int count = 0;

	while (count < 10)
	{
		putchar(count);
		count++;
	}
	putchar('\n');
	return (0);
}
