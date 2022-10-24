#include "lists.h"
/**
 * reverse_listint - function that reverses a linked list
 * @head: head of a linked list
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *o;
	listint_t *n;

	o = NULL;
	n = NULL;

	while (*head != NULL)
	{
		n = (*head)->next;
		(*head)->next = o;
		o = *head;
		*head = n;
	}

	*head = o;
	return (*head);
}
