#include <stdio.h>

/**
 * main - Entry stream
 * Return: Always 0 (success)
 */

int main(void)
{
	char alpha = 'a';
	char ALPHA = 'A';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}

	while (ALPHA <= 'Z')
	{
		putchar(ALPHA);
		ALPHA++;
	}

	putchar('\n');

	return (0);
}
