#include "lists.h"
/**
 * insert_nodeint_at_index - function that inserts a new
 * @head: starting point
 * @idx: is the index of the list
 * @n: parameter
 * Return: the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j;
	listint_t *list = *head;
	listint_t *adnew;

	adnew = malloc(sizeof(listint_t));
	if (!adnew || !head)
		return (NULL);
	adnew->n = n;
	adnew->next = NULL;

	if (idx == 0)
	{
		adnew->next = *head;
		*head = adnew;
		return (adnew);
	}

	for (j = 0; list && j < idx; j++)
	{
		if (j == idx - 1)
		{
			adnew->next = list->next;
			list->next = adnew;
			return (adnew);
		}
		else
			list = list->next;
	}
	return (NULL);
}
