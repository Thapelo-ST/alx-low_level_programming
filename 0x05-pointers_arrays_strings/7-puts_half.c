#include <stdio.h>
#include "main.h"

/**
 * puts_half - Prints the second half of a string, followed by a new line.
 *
 * @str: A pointer to the first character of the string.
 */
void puts_half(char *str)
{
	int len = _strlen(str);
	int n = (len % 2 == 0) ? len / 2 : (len - 1) / 2 + 1;
	int i;

	for (i = n; i < len; i++)
	{
		putchar(str[i]);
	}

	putchar('\n');
}
