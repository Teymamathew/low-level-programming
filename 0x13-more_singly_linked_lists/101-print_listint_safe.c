#include "lists.h"
#include <stdio.h>

size_t looped_listint_list(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * print_listint_safe - function that prints a listint_t
 * @head: constant parameter
 * Return:  the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nd, j = 0;

	nd = looped_listint_list(head);

	if (nd == 0)
	{
		for (; head != NULL; nd++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (j = 0; j < nd; j++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nd);
}

/**
 *  looped_listint_list - list number of nodes
 *  @head: contsant parameter
 *  Return: 0 alaways
 */
size_t looped_listint_list(const listint_t *head)
{
	size_t nd = 1;
	const listint_t *wen, *den;

	if (head == NULL || head->next == NULL)
		return (0);

	wen = head->next;
	den = (head->next)->next;

	while (den)
	{
		if (wen == den)
		{
			wen = head;
			while (wen != den)
			{
				nd++;
				wen = wen->next;
				den = den->next;
			}
			wen = wen->next;
			while (wen != den)
			{
				nd++;
				wen = wen->next;
			}

			return (nd);
		}

		wen = wen->next;
		den = (den->next)->next;
	}

	return (0);
}
