#include "main.h"

/**
 * _abs - checks if number is absolute or not
 * @num: the integer to be checked
 *
 * Return: -num if c is obselete, num otherwise
 */

int _abs(int num)
{
	if (num < 0)
	{
		return (-num);
	}
	else
	{
		return (num);
	}
}
