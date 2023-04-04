#include "lists.h"

/**
 *free_listint2 - frees all nodes of a listint_t list and sets the head to NULL
 *@head: double pointer to the head of the list
 */

void free_listint2(listint_t **head)
{
	/*decalring variabnles*/
	listint_t *current_head;

	/*checking validity*/
	if (head == NULL)
		return;
	/*freeing nodes*/
	while (*head != NULL)
	{
		current_head = *head;
		*head = (*head)->next;
		free(current_head);
	}
	/*returning head node*/
	*head = NULL;
}
