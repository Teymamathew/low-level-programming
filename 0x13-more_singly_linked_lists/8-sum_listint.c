#include "lists.h"
/**
 * sum_listint - a function that returns the sum of
 * all the data (n) of a listint_t linked list.
 * @head: start point
 * Return: 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	listint_t *list = head;
	int sum = 0;

	while (list)
	{
		sum += list->n;
		list = list->next;
	}

	return (sum);
}
