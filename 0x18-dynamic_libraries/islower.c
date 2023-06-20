#include "main.h"

/**
 * _islower - checks fr a character that is lowercase
 * @c: character to check
 * Return: 1 if lowercase, 0 if uppercase
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);

	_putchar('\n');
}
