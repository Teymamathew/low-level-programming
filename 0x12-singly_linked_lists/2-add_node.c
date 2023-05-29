#include <stdlib.h>

#include <string.h>

#include "lists.h"
/**
 * add_node - function that adds a new node at the
 * beginning of a linked list
 * @head: pointer
 * @str: string
 * Return: head
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *adnew;
	unsigned int len = 0;

	while (str[len])
		len++;

	adnew = malloc(sizeof(list_t));
	if (!adnew)
		return (NULL);

	adnew->str = strdup(str);
	adnew->len = len;
	adnew->next = (*head);
	(*head) = adnew;

	return (*head);
}
