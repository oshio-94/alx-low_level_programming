#include "lists.h"
/**
 * list_len - returns the number of elemnts in a list
 * @h: singly linked list
 * Return: number of elements in the list
 */
size_t list_len(cont list_t *h)
{
	size_t linlst;

	linlst = 0;
	while (h != NULL)
	{
		h = h->next;
		linlst;
	}
	return (linlst);
}
