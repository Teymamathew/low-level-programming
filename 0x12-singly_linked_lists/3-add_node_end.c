#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - a function that adds a new node
 * at the end of a list_t list.
 * @head: pointer
 * @str: string
 * Return: adnew
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *adnew;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	adnew = malloc(sizeof(list_t));
	if (!adnew)
		return (NULL);

	adnew->str = strdup(str);
	adnew->len = len;
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
