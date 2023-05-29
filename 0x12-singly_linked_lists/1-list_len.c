#include <stdlib.h>

#include "lists.h"
/**
 * list_len - function that returns the number
 * of element linked to a list
 * @h: parameter pointer
 * Return: number
 */
size_t list_len(const list_t *h)
{
	size_t m = 0;

	while (h)
	{
		m++;
		h = h->next;
	}
	return (m);
}
