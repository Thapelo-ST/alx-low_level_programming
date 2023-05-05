#include "main.h"
/**
 * print_binary - ...
 * @n: ...
 * Return: ...
 */
void print_binary(unsigned long int n)
{
	/* checking if n can be shifted to the right to add to position */
	if (n >> 0)
	{
		/*if it can shift it by one position to the right*/
		if (n >> 1)
		{
			print_binary(n >> 1);
		}
		_putchar((n & 1) + '0');
	}
	else
		_putchar('0');
}
