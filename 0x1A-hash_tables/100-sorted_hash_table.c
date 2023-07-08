#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * shash_table_create - Creates a sorted hash table
 * @size: The size of the hash table
 *
 * Return: A pointer to the newly created sorted hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int i;

	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		ht->array[i] = NULL;

	ht->shead = NULL;
	ht->stail = NULL;

	return (ht);
}

/**
 * shash_table_set - Adds an element to the sorted hash table
 * @ht: The sorted hash table
 * @key: The key of the element
 * @value: The value of the element
 *
 * Return: 1 if successful, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	int cmp = 0;
	shash_node_t *newNode, *currentNode;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);
	currentNode = ht->shead;
	while (currentNode != NULL)
	{
		cmp = strcmp(currentNode->key, key);
		if (cmp == 0)
		{
			free(currentNode->value);
			currentNode->value = strdup(value);
			return (1);
		}
		else if (cmp > 0)
			break;
		currentNode = currentNode->snext;
	}
	newNode = malloc(sizeof(shash_node_t));
	if (newNode == NULL)
		return (0);
	newNode->key = strdup(key);
	newNode->value = strdup(value);
	newNode->next = NULL;
	if (currentNode == NULL)
	{
		if (ht->shead == NULL)
			ht->shead = newNode;
		else
		{
			ht->stail->snext = newNode;
			newNode->sprev = ht->stail;
		}
		ht->stail = newNode;
	}
	else
	{
		if (currentNode->sprev == NULL)
			ht->shead = newNode;
		else
		{
			currentNode->sprev->snext = newNode;
			newNode->sprev = currentNode->sprev;
		}
		newNode->snext = currentNode;
		currentNode->sprev = newNode;
	}
	return (1);
}

/**
 * shash_table_get - Retrieves the value associated with a key
 * @ht: The sorted hash table
 * @key: The key to search for
 *
 * Return: The value associated with the key, or NULL if not found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *currentNode;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	currentNode = ht->array[index];

	while (currentNode != NULL)
	{
		if (strcmp(currentNode->key, key) == 0)
			return (currentNode->value);
		currentNode = currentNode->next;
	}

	return (NULL);
}

/**
 * shash_table_print - Prints the sorted hash table
 * @ht: The sorted hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	int isFirst = 1;
	shash_node_t *currentNode;

	if (ht == NULL)
		return;

	printf("{");
	currentNode = ht->shead;
	while (currentNode != NULL)
	{
		if (!isFirst)
			printf(", ");
		printf("'%s': '%s'", currentNode->key, currentNode->value);
		isFirst = 0;
		currentNode = currentNode->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Prints the sorted hash table in reverse order
 * @ht: The sorted hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	int isFirst = 1;
	shash_node_t *currentNode;

	if (ht == NULL)
		return;

	printf("{");
	currentNode = ht->stail;
	while (currentNode != NULL)
	{
		if (!isFirst)
			printf(", ");
		printf("'%s': '%s'", currentNode->key, currentNode->value);
		isFirst = 0;
		currentNode = currentNode->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - Deletes the sorted hash table
 * @ht: The sorted hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *currentNode, *nextNode;

	if (ht == NULL)
		return;

	currentNode = ht->shead;
	while (currentNode != NULL)
	{
		nextNode = currentNode->snext;
		free(currentNode->key);
		free(currentNode->value);
		free(currentNode);
		currentNode = nextNode;
	}

	free(ht->array);
	free(ht);
}
