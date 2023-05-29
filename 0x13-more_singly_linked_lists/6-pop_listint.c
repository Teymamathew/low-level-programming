#include "lists.h"
/**
 * pop_listint - a function that deletes the head node
 * of a listint_t linked list, and returns the head
 * node’s data (n).
 * @head: start point
 * Return: Always 0.
 */
int pop_listint(listint_t **head)
{
	listint_t *list;
	int j;

	if (!head || !*head)
		return (0);

	j = (*head)->n;
	list = (*head)->next;
	free(*head);
	*head = list;

	return (j);
}
