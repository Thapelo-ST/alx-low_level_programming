#include "main.h"

/**
 * binary_to_uint -  function that converts a binary number
 * to an unsigned int.
 * @b: string to convert
 * Return: unsigned int
 *
 */

unsigned int binary_to_uint(const char *b)
{
	/*decalaring variables*/
	unsigned int number = 0;
	int length, binary = 1;

	/*checking for validity*/
	if (!b)
	{
		return (0);
	}
	/*checking legnth*/
	for (length = 0; b[length] != '\0'; length++)
		;
	/*converting from binary to uint*/
	length--;
	while (length >= 0)
	{
		if (b[length] != '0' && b[length] != '1')
		{
			return (0);
		}
		if (b[length] & 1)
		{
			number += binary;
		}
		length--;
		binary *= 2;
	}
	return (number);
}
