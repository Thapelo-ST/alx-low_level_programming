#include "lists.h"
/**
 * free_dlistint - ...
 *
 * @head: ...
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head, *next;

	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
