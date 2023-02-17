#include <stdio.h>

/**
 * main - entry stream
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ahlpa = 'z';

	while (ahlpa >= 'a')
	{
		putchar(ahlpa);
		ahlpa--;
	}
	putchar('\n');
	return (0);
}
