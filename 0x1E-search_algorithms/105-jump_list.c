#include "search_algos.h"

/**
 * jump_list - ...
 * @list: ...
 * @size: ...
 * @value: ...
 *
 * Return: ...
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump = sqrt(size), i;
	listint_t *current = list, *prev = NULL;

	if (list == NULL || size == 0)
		return (NULL);

	while (current && current->n < value)
	{
		prev = current;

		for (i = current->next; current->next && i < current->index; i++)
		{
			if (i == current->next)
			{
				printf("Value checked at index [%ld] = [%d]\n", current->index,
					   current->n);
				break;
			}
			current = current->next;
		}
		if (i >= size)
			i = size - 1;

		if (current->n >= value)
		{
			printf("Value found between indexes [%ld] and [%lu]\n",
				   prev->index, current->index);
			while (prev && prev->index <= current->index)
			{
				printf("Value checked at index [%ld] = [%d]\n", prev->index, prev->n);
				if (prev->n == value)
					return (prev);
				prev = prev->next;
			}
			return (NULL);
		}
	}
	return (NULL);
}
