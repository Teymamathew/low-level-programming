#include "lists.h"
/**
 * delete_nodeint_at_index - function that deletes the node
 * @head: startin point
 * @index: index of node to be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int j;
	listint_t *list = *head;
	listint_t *point = NULL;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(list);
		return (1);
	}

	while (j < index - 1)
	{
		if (!list || !(list->next))
			return (-1);
		list = list->next;
		j++;
	}

	point = list->next;
	list->next = point->next;
	free(point);
	return (1);
}
