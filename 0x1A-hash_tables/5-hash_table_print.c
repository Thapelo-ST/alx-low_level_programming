#include "hash_tables.h"
/**
 * hash_table_print - ...
 * @ht: ...
 */


void hash_table_print(const hash_table_t *ht)
{
    unsigned int first = 1, i;
    if (ht == NULL)
        return;
    
    printf("{");
    for (i = 0; i < ht->size; i++)
    {
        hash_node_t *thisNode = ht->array[i];
        while(thisNode)
        {
            if(!first)
                printf(", ");
            printf("'%s': '%s'", thisNode->key, thisNode->value);
            first = 0;
            thisNode = thisNode->next;
        }
    }
    printf("}\n");
}

