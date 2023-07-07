#include "hash_tables.h"

/**
 * hash_table_set - ...
 * @ht: ...
 * @key: ...
 * @value: ...
 * 
 * Return: ...
 */

int hash_table_set(hash_table_t *ht, const char *key,const char *value)
{
    hash_node_t *thatNode = malloc(sizeof(hash_node_t));
    unsigned long int index = key_index((unsigned char *)key, ht->size);
    hash_node_t *thisNode = ht->array[index];
    
    if (ht == NULL || key == NULL || *key == '\0')
        return(0);
    

    while(thisNode != NULL)
    {
        if (strcmp(thisNode->key, key) == 0)
        {
            free(thisNode->value);
            thisNode->value = strdup(value);
            return (1);
        }
        thisNode = thisNode->next;
    }

    thatNode = malloc(sizeof(hash_node_t));
    if (thatNode == NULL)
        return(0);
    
    thatNode->key = strdup(key);
    thatNode->value = strdup(value);
    thatNode->next = ht->array[index];
    ht->array[index] = thatNode;

    return (1);
}