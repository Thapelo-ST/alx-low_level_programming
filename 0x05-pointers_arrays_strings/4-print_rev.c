#include "main.h"

/**
 * print_rev - prints a string in reverse order, followed by a new line
 *
 * @s: a pointer to a null-terminated string
 *
 * Description: This function outputs the characters in the string pointed
 *              to by `s` in reverse order, followed by a new line.
 */

void print_rev(char *s)
{
	int len = 0;

	/* finding the length of the string */
	while (*s != '\0')
	{
		len++;
		s++;
	}

	/* printing the string in reverse */
	s--;
	while (len > 0)
	{
		_putchar(*s);
		s--;
		len--;
	}
	putchar('\n');
}
