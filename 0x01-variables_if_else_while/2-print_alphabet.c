#include <stdio.h>

/**
 * main - entry point
 * Return: Always 0 (Succcess)
 */

int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}

	putchar('\n');

	return (0);
}
