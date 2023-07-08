#include "hash_tables.h"

/**
 * key_index - ...
 * @key: ...
 * @size: ...
 *
 * Return: ...
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);
	unsigned long int index = hash % size;

	if (size <= 0 && key == NULL)
		return (-1);

	return (index);
}
