#include "lists.h"
/**
 * listint_len -  a function that returns the number of elements
 *  in a linked listint_t list.
 *  @h: parameter
 *  Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t ele = 0;

	while (h)
	{
		ele++;
		h = h->next;
	}

	return (ele);
}
