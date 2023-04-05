#include "lists.h"

/**
  * reverse_listint - function that reverses a listint_t linked list.
  * @head: pointer to head
  *
  * Return: pointer to the first node of new list
  */
listint_t *reverse_listint(listint_t **head)
{
	/*decalring and assigning variables*/
	listint_t *prev = NULL, *next = NULL;
	/*checking if head is null*/
	if (head != NULL)
	{
		/*starting loop*/
		while (*head != NULL)
		{
			next = *head;
			*head = (*head)->next;
			next->next = prev;
			prev = next;
		}
		/*assigning new variable to head*/
		*head = prev;
		return (*head);
	}

	return (NULL);
}
