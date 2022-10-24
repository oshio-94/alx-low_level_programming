#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - function that deletes a head node of a
 * linked list
 * @head: head of a linked list
 * Return: returns the head nodes date
 */
int pop_listint(listint_t **head)
{
	listint_t *new;
	int x;

	if (head == NULL || *head == NULL)
		return (0);
	new = *head;
	*head = new->next;
	n = first->n;
	free(first);
	return (n);
}
