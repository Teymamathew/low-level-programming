#include "lists.h"
/**
 * free_listint_safe - a function that frees a listint_t
 * @h: parameter
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	int j;
	listint_t *list;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		j = *h - (*h)->next;
		if (j > 0)
		{
			list = (*h)->next;
			free(*h);
			*h = list;
			size++;
		}
		else
		{
			free(*h);
			*h = NULL;
			size++;
			break;
		}
	}
	*h = NULL;

	return (size);
}
