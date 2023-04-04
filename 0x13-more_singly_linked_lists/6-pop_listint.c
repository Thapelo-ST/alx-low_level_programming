#include "lists.h"

/**
 * pop_listint - removes the first node of a listint_t linked list
 * @head: double pointer to the head of the list
 * Return: the data of the first node or 0 if the list is empty
 * and prints "List is empty." to the standard output
 */

int pop_listint(listint_t **head)
{
	/*declaring variables*/
	int data;
	listint_t *temp;

	/*cheking if head is null*/
	if (*head == NULL)
	{
		return (0);
	}
	/*assigning new variable*/
	data = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);

	return (data);
}
