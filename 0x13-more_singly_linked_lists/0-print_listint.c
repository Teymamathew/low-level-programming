#include "lists.h"
/**
 * print_listint -  a function that prints all the elements
 * of a listint_t list.
 * @h: input parameter
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t ele = 0;

	while (h)
	{
		printf("%d\n", h->n);
		ele++;
		h = h->next;
	}

	return (ele);
}
