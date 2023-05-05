#include "main.h"

/**
 * get_bit - ...
 * @n: ...
 * @index: ...
 * Return: ...
 */
int get_bit(unsigned long int n, unsigned int index)
{
	/*check validity*/
	if (index > 32)
		return (-1);
	/* getting index*/
	return (n >> index & 1);
}
