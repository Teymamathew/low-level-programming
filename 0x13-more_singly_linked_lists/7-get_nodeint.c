#include "lists.h"
/**
 * get_nodeint_at_index - a function that returns the
 * nth node of a listint_t linked list.
 * @head: start point
 * @index: is the index of the node, starting at 0
 * Return: NULL if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *list = head;
	unsigned int j = 0;

	while (list && j < index)
	{
		list = list->next;
		j++;
	}

	return (list ? list : NULL);
}
