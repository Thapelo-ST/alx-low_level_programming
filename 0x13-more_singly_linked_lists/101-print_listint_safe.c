#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	/*declaring and assignig variables*/
	const listint_t *first_ptr = head, *second_ptr = head;
	size_t counter = 0;

	/*checking validity*/
	if (head == NULL)
	{
		return (0);
	}
	/* looping to print */
	while (first_ptr != NULL && second_ptr != NULL)
	{
		printf("[%p] %d\n", (void *)first_ptr, first_ptr->n);
		/*incrimenting variables*/
		counter++;
		first_ptr = first_ptr->next;
		if (second_ptr->next != NULL)
			second_ptr = second_ptr->next->next;
		else
			break;
		/*checking if the loop exits*/
		if (first_ptr == second_ptr)
		{
			printf("-> [%p] %d\n", (void *)first_ptr, first_ptr->n);
			return (-1);
		}
	}
	/*print other node pointers and elements if they exist*/
	while (first_ptr != NULL)
	{
		printf("[%p] %d\n", (void *)first_ptr, first_ptr->n);
		counter++;
		first_ptr = first_ptr->next;
	}
	return (counter);
}
