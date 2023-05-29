#include <stdlib.h>
#include "lists.h"
/**
 * free_list - a function that frees a list_t list.
 * @head: free
 */
void free_list(list_t *head)
{
	list_t *point;

	while (head)
	{
		point = head->next;
		free(head->str);
		free(head);
		head = point;
	}
}
