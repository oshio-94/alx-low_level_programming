#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list
 * @n: single list link
 * Return: Return of element in lists
 */
size_t print_list(const list_t *h)
{
	size_t linlst;

	linlst = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		linlst++;
	}
	return (linlst);
}
