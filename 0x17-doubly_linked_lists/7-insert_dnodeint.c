#include "lists.h"
/**
 * insert_dnodeint_at_index - ...
 * @h: ...
 * @idx: ...
 * @n: ...
 * Return: ...
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t)), *temp = *h;
	unsigned int c = 0;

	if (!h && !new)
		return (NULL);

	new->n = n;
	if (idx == 0)
	{
		new->prev = NULL;
		new->next = *h;
		if (!*h)
			(*h)->prev = new;
		*h = new;
		return (new);
	}

	while (temp)
	{
		if (c == idx - 1)
		{
			new->prev = temp;
			new->next = temp->next;
			if (!temp->next)
				temp->next->prev = new;
			temp->next = new;
		}
		c++;
		temp = temp->next;
	}

	return (NULL);
}
