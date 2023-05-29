#include "lists.h"
/**
 * free_listint - a function that frees a listint_t list.
 * @head: start point
 */
void free_listint(listint_t *head)
{
	listint_t *list;

	while (head)
	{
		list = head->next;
		free(head);
		head = list;
	}
}
