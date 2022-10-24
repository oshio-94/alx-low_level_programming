#include "lists.h"
/**
 * listint_len - a function that returns the number of elements in a linked list
 * @h: the head of a linked list
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t numlist = 0;

	while (h != NULL)
	{
		h = h->next;
		numlist++;
	}
	return (numlist);
}
