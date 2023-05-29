#include "lists.h"
/**
 * add_nodeint -  a function that adds a new node
 * at the beginning of a listint_t list.
 * @head: parameter
 * @n: parameter 2
 * Return: added nodes
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *adnew;

	adnew = malloc(sizeof(listint_t));
	if (!adnew)
		return (NULL);

	adnew->n = n;
	adnew->next = *head;
	*head = adnew;

	return (adnew);
}
