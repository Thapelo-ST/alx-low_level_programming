#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list.
 * @head: Pointer to pointer to the head of the list.
 *
 * Return: Pointer to the first node of the reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
	/*declare variables*/
	listint_t *node_before, *current;

	/*assigning variables*/
	node_before = NULL;
	current = *head;
	/*check for validity*/
	if (head == NULL)
	{
		return (NULL);
	}
	/*finding the first node then going reverse*/
	while (current != NULL)
	{
		*head = (*head)->next;
		current->next = node_before;
		node_before = current;
		current = *head;
	}
	/*making head take the variable that is not null*/
	*head = node_before;
	return (*head);
}
