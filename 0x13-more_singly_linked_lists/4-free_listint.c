#include "lists.h"

/**
 * free_listint - Frees a linked list
 * @head: Pointer to the head node of the list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	/*decalare variables for freeing memory*/
	listint_t *tmp;

	/*freeing list*/
	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
