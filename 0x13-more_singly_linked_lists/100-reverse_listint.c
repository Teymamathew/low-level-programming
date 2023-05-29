#include "lists.h"
/**
 * istint_t *reverse_listint - function that reverses
 * @head: start point
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *start = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = start;
		start = *head;
		*head = next;
	}
	*head = start;

	return (*head);
}

