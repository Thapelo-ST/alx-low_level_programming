#include "lists.h"
/**
 * find_listint_loop - Finds the loop in a linked list
 * @head: A pointer to the head of the linked list
 * Return: The address of the node where the loop starts,
 *         or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
    listint_t *n1, *n2;

    if (head == NULL || head->next == NULL)
        return (NULL);
    n1 = head->next;
    n2 = head->next->next;
    while (n2 != NULL && n2->next != NULL)
    {
        if (n1 == n2)
        {
            n1 = head;
            while (n1 != n2)
            {
                n1 = n1->next;
                n2 = n2->next;
            }
            return (n1);
        }
        n1 = n1->next;
        n2 = n2->next->next;
    }
    return (NULL);
}
