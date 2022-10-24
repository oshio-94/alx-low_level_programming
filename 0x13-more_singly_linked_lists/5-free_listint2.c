#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - function that frees list
 * @head: head of a list
 * Return: no return
 */
void free_listint2(listint_t **head)
{
	listint_t *next;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
	}
}
