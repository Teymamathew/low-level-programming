#include "lists.h"
/**
 * add_nodeint_end -  a function that adds a new node
 * at the end of a listint_t list.
 * @head: parameter
 * @n: parameter 1
 * Return: added nodes
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *adnew;
	listint_t *temp = *head;

	adnew = malloc(sizeof(listint_t));
	if (!adnew)
		return (NULL);

	adnew->n = n;
	adnew->next = NULL;

	if (*head == NULL)
	{
		*head = adnew;
		return (adnew);
	}
	while (temp->next)
		temp = temp->next;

	temp->next = adnew;

	return (adnew);
}

