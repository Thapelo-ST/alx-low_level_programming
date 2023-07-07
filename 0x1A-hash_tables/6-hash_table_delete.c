#include "hash_tables.h"

/**
 * hash_table_delete - ...
 * @ht: ...
 */

void hash_table_delete(hash_table_t *ht)
{
    unsigned long int i;
    hash_node_t *currentNode, *nextNode;

    if (ht == NULL)
        return;

    for (i = 0; i < ht->size; i++)
    {
        currentNode = ht->array[i];
        while (currentNode != NULL)
        {
            nextNode = currentNode->next;
            free(currentNode->key);
            free(currentNode->value);
            free(currentNode);
            currentNode = nextNode;
        }
    }

    free(ht->array);
    free(ht);
}
