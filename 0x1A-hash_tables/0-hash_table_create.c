#include "hash_tables.h"
/**
 * hash_table_create - ...
 * @size: ...
 * Return: ...
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *address = malloc(sizeof(hash_table_t));
	unsigned long int i = 0;

	if (size == 0)
		return (NULL);

	if (address == NULL)
		return (NULL);

	address->size = size;
	address->array = malloc(size * sizeof(hash_node_t *));
	if (address->array == NULL)
	{
		free(address);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		address->array[i] = NULL;

	return (address);
}
