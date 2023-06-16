#include "lists.h"
/**
 * add_dnodeint_end - ...
 * @head: ...
 * @n: ...
 * Return: ...
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *current = *head;

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		while (current->next != NULL)
			current = current->next;


		current->next = new;
		new->prev = current;
	}

	return (new);
}
