#include "hash_tables.h"

/**
 * hash_table_get - ...
 * @key: ...
 * @ht: ...
 *
 * Return: ...
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = key_index((unsigned char *)key, ht->size);
	hash_node_t *thisNode = ht->array[index];

	if (ht == NULL || key == NULL)
		return (NULL);

	while (thisNode != NULL)
	{
		if (strcmp(thisNode->key, key) == 0)
			return (thisNode->value);
		thisNode = thisNode->next;
	}
	return (NULL);
}
