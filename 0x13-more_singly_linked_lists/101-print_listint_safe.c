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
		exit(98);
	}
	/* looping to print */
	while (first_ptr != NULL && second_ptr != NULL && second_ptr->next != NULL)
	{
		printf("[%p] %d\n",(void *)first_ptr->next, first_ptr->n);
		/*incrimenting variables*/
		counter++;
		first_ptr = first_ptr->next;
		second_ptr = second_ptr->next->next;
		/*checking if the loop exits*/
		if (first_ptr == second_ptr)
		{
			printf("-> [%p] %d\n", (void *)first_ptr, first_ptr->n);
			exit(98);
		}
	}
	/*print other node pointers and elements if they exist*/
	while (first_ptr != NULL)
	{
		printf("[%p] %d\n",(void *)first_ptr->next, first_ptr->n);
		counter++;
		first_ptr = first_ptr->next;
	}
	return(counter);
}
