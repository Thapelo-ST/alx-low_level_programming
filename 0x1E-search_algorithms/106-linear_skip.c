#include "search_algos.h"

/**
 * linear_skip - ...
 * @list: ...
 * @value: ...
 *
 * Return: ...
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *current, *express;

	if (list == NULL)
		return (NULL);

	express = list;

	while (express)
	{
		current = express;
		if (express->express == NULL || express->express->n >= value)
		{
			printf("Value checked ar index [%ld] = [%d]\n", express->index, express->n);
			if (express->express == NULL)
			{
				while (current->next)
					current = current->next;
			}
			printf("Value found between indexes [%ld] and [%ld]\n",
				   current->index, express->index);
			while (current != express)
			{
				printf("Value checked at index [%ld] = [%d]\n",
					   current->index, current->n);
				if (current->n == value)
					return (current);
				current = current->next;
			}
			return (NULL);
		}
		printf("Value checked at index [%ld] = [%d]\n", express->index, express->n);
		express = express->express;
	}
	return (NULL);
}
