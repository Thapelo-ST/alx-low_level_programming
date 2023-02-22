#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>

/**
 * _putchar - Writes a character to the standard output
 *
 * @c: The character to write
 *
 * Return: On success, the character written is returned. On error, -1 is
 *         returned and errno is set appropriately.

int _putchar(int p)
{
	putchar(p);
	return (0);
}
*/

/*task 1*/
void print_alphabet(void)
{
	char lett = 'a';

	while (lett < 'z')
	{
		_putchar(lett);
		lett++;
	}
}
/*task 2*/
/**
 * print_alphabet_x10 - prints the alphabet in lowercase 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char lett = 'a';
	int count = 0;

	while (count < 10)
	{
		while (lett < 'z')
		{
			_putchar(lett);
			lett++;
		}
		_putchar('\n');
		count++;
	}
}
#endif /* MAIN_H */
