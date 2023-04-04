#include "lists.h"

/**
 *sum_listint - function that calcs the sum of all the ints in a linked list.
 *@head: Pointer to the first node of the linked list.
 *Return: The sum of all the ints in the linked list, 0 if the list is empty.
 */

int sum_listint(listint_t *head)
{
	/*declare variables*/
	int total;

	/*assigning variable*/
	total = 0;
	/*checking if head is null*/
	if (head == NULL)
	{
		return (0);
	}
	/*add numbers in the list*/
	while (head != NULL)
	{
		total += head->n;
		head = head->next;
	}
	/*return total*/
	return (total);
}
