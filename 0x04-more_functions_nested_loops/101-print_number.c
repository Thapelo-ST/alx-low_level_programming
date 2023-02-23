#include "main.h"

int _putchar(char c);

/**
 * print_number - prints number
 *
 * @n: integer to print to character
 */

void print_number(int n)
{
	unsigned int tens, digit, positive = n;
	double t = 1;

	if (n == 0)
		_putchar('0');
	else
	{
		if (n < 0)
		{
			positive = n * -1;
			_putchar('-');
		}

		while (t <= positive)
			t *= 10;
		tens = t / 10;

		while (tens >= 1)
		{
			digit = positive / tens;
			_putchar(digit + '0');
			positive = (positive - (tens * digit));
			tens /= 10;
		}
	}
}
