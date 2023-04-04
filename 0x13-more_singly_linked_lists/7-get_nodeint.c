#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to the head of the list
 * @index: index of the node to be returned
 * Return: pointer to the nth node of the list, or NULL if it does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	/*declaring variables*/
	listint_t *count;
	unsigned int i;

	/*assigning variables*/
	i = 0;
	count = head;
	/*checking if head and index are null*/
	if (head == NULL)
	{
		return (NULL);
	}
	/* checking index*/
	while (count != NULL && i < index)
	{
		count = count->next;
		i++;
	}
	/*even if the data count is not equal to the index*/
	if (count == NULL)
	{
		return (NULL);
	}

	return (count);
}
