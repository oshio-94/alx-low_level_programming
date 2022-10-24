#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - function that
 * deletes the node at index of a linked list
 * @head: head of a linked list
 * @index: index of the node that should be deleted
 * Returns: returns 1 for success else -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *old;
	listint_t *next;

	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}

	if (head == NULL || *head == NULL)
		return (-1);
	old = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (old->next == NULL)
			return (-1);
		old = old->next;
	}
	next = old->next;
	old->next = next->next;
	free(next);
	return (-1);
}
