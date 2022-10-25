#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - function that frees a linked list
 * @head: head of a list
 * Return: no return
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->temp;
		free(head);
		head = temp;
	}
}
