#include "main.h"

/**
 * print_alphabet - Entry stream
 * Return: Always 0 (success)
 */

void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
}
