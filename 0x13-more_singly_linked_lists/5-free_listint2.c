#include "lists.h"
/**
 * free_listint2 -  a function that frees a listint_t list.
 * @head: starting point
 */
void free_listint2(listint_t **head)
{
	listint_t *list;

	if (*head == NULL)
		return;

	while (*head)
	{
		list = (*head)->next;
		free(*head);
		*head = list;
	}

	*head = NULL;
}
