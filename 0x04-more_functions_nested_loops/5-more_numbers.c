#include "main.h"

/**
 * more_numbers - prints the numbers
 */

void more_numbers(void)
{
	int j;
	int counter;

	for (counter = 1; counter <= 10; counter++)
	{
		for (j = 0; j <= 14; j++)
		{
			if ((j / 10) > 0)
				_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
