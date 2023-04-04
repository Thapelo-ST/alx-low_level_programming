#include "lists.h"

/**
 * listint_len - Calculates the length of a listint_t list
 * @h: Pointer to the head node of the list
 * Return: The length of the list as a size_t
 */

size_t listint_len(const listint_t *h)
{
	/*decalare variable*/
	int count;

	/*assigning variables*/
	count = 0;
	/*calculating legnth*/
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
