#include "lists.h"
/**
 * find_listint_loop - a function that finds the loop in a linked list.
 * @head: constant parameter
 * Return: The address of the node where the loop starts,
 * or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *s = head;
	listint_t *e = head;

	if (!head)
		return (NULL);

	while (s && e && e->next)
	{
		e = e->next->next;
		s = s->next;
		if (e == s)
		{
			s = head;
			while (s != e)
			{
				s = s->next;
				e = e->next;
			}

			return (e);
		}
	}

	return (NULL);
}
