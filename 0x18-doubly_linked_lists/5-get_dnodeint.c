#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a list
 * @head: the head of a list
 * @index: index of the node
 *
 * Return: the node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int i = 0;

	if (head)
	{
		while (current != NULL)
		{
			if (i == index)
				return (current);

			current = current->next;
			++i;
		}
	}

	return (NULL);
}
