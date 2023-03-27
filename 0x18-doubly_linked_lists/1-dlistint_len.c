#include <stdlib.h>
#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a list
 * @h: the list
 *
 * Return: number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int length = 0;

	while (h != NULL)
	{
		++length;
		h = h->next;
	}

	return (length);
}

