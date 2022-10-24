#include "lists.h"
/**
 * add_nodeint - function that adds a new node at the beginning
 * of a list
 * @head: head of a linked list
 * @n: number of elements
 * Return: return the address of a new element or NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *list_new;

	list_new = malloc(sizeof(listint_t));

	if (list_new == NULL)
		return (NULL);

	list_new->n = n;
	list_new->next = *head;
	*head = list_new;

	return (*head);
}
