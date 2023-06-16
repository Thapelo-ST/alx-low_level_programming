#include "lists.h"
/**
 * sum_dlistint - ...
 * @head: ...
 * Return: ...
 */
int sum_dlistint(dlistint_t *head)
{
	int t = 0;

	if (!head)
		return (0);

	while (head)
	{
		t += head->n;
		head = head->next;
	}

	return (t);
}
