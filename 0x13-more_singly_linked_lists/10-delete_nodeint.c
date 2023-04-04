#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a linked list
 * @head: pointer to the head of the list
 * @index: index of the node to delete
 * Return: 1 on success, -1 on failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	/*declare vaiables*/
	listint_t *old_pos, *new_pos;

	/*checking for validity*/
	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		old_pos = *head;
		*head = (*head)->next;
		free(old_pos);
		return (-1);
	}
	/*assigning variables*/
	old_pos = *head;
	new_pos = (*head)->next;
	/*removing the node*/
	while (new_pos != NULL && index != 0)
	{
		old_pos = new_pos;
		new_pos = new_pos->next;
		index--;
	}
	if (new_pos == NULL)
	{
		return (-1);
	}
	/*freeing the old pos*/
	old_pos->next = new_pos->next;
	free(new_pos);
	return (1);
}
