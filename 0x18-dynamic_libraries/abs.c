#include "main.h"

/**
 * _abs - compute absolute value of integers
 * @n: integer argumement
 * Return: absolute value
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	return (0);
}
