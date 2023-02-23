#include "main.h"

/**
 * print_diagonal - prints diagonal lines
 * @n: input variable
 *
 */

void print_diagonal(int n)
{
	int draw;
	int space;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (draw = 1; draw <= n; draw++)
		{
			for (space = 1; space < draw; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
