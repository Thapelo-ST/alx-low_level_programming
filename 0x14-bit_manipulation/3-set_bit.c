#include "main.h"
/**
 * set_bit - ...
 * @n: ...
 * @index: ...
 * Return: ...
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	/* declare variables */
	unsigned long int b_set = 1;
	/* setting to new bit*/
	*n |= (b_set << index);
	if (index <= (sizeof(unsigned long int) * 8))
		return (1);
	else
		return (-1);
}
