#include "lists.h"
/**
 * sum_listint - function that returns the sum of all the data in a linked list
 * @head: head of a linked list
 * Return: return 0 if empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
