#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to the head of the list
 * @n: integer data to be added to the new node
 * Return: pointer to the newly added node, or NULL if allocation fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/*declare variables*/
	listint_t *added_node;
	listint_t *last;

	/*assigning variables*/
	added_node = malloc(sizeof(listint_t));
	last = *head;

	/*checking for validity*/
	if (added_node == NULL)
	{
		return (NULL);
	}
	/*else if its valid*/
	added_node->n = n;
	added_node->next = NULL;
	if (*head == NULL)
	{
		*head = added_node;
		return (*head);
	}
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = added_node;
	/*return*/
	return (last->next);
}
