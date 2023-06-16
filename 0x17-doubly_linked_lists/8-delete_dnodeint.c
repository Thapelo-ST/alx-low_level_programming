#include "lists.h"
/**
 * delete_dnodeint_at_index - ...
 * @head: ...
 * @index: ...
 * Return: ...
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int count = 0;

	if (!head || !*head)
		return (-1);

	if (index == 0)
	{
		*head = temp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}

	while (temp)
	{
		if (count == index)
		{
			if (temp->next)
				temp->next->prev = temp->prev;
			if (temp->prev)
				temp->prev->next = temp->next;
			free(temp);
			return (1);
		}
		temp = temp->next;
		count++;
	}

	return (-1);
}
