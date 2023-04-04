#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: Pointer to the head of a linked list.
 * @idx: Index of the list where the new node should be added.
 * @n: Value to store in the new node.
 * Return: If malloc fails, or if the func fails to insert the new node- NULL.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	/*declaring variables*/
	listint_t *new_node, *old_node;
	unsigned int i;
	/*assigniong variables*/
	i = 0;
	old_node = *head;
	/*checking if the variables needed are valid*/
	if (head == NULL || idx == 0 || n == ' ')
	{
		return (NULL);
	}
	/*finding index*/
	while (old_node != NULL && i < idx - 1)
	{
		old_node = old_node->next;
		i++;
	}
	/*checking if variable is in range*/
	if (old_node == NULL)
	{
		return (NULL);
	}
	/*assigning new variable position*/
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = old_node->next;
	old_node->next = new_node;

	return (new_node);
}
