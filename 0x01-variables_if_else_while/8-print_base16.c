#include <stdio.h>

/**
 * main - Entry stream
 * Return: Always 0 (success)
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		i++;
	}

	i = 0;

	while (i < 6)
	{
		putchar(i + 'a');
		i++;
	}

	putchar('\n');
	return (0);
}
