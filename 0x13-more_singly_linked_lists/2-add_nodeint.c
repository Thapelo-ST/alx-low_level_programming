#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: pointer to the head of the list
 * @n: integer data to be added to the new node
 * Return: pointer to the newly added node, or NULL if allocation fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	/*declare variables*/
	listint_t *added_node;

	added_node = malloc(sizeof(listint_t));

	/*checking for validity*/
	if (added_node == NULL)
	{
		return (NULL);
	}
	/*else if its valid*/
	added_node->n = n;
	added_node->next = *head;
	*head = added_node;
	/*return*/
	return (added_node);
}
