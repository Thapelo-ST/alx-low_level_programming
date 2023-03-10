#include <stdio.h>

/**
 * main - entry stream to print all double digit numbers
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j;

	i = 0;
	while (i <= 8)
	{
		j = i + 1;
		while (j <= 9)
		{
			putchar(i + '0');
			putchar(j + '0');

			if (i < 8 || j < 9)
			{
				putchar(',');
				putchar(' ');
			}

			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
