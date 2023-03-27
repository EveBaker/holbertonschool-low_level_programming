#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - returns the sum of all data in a list
 * @head: the head of the list
 *
 * Return: the sum of all data
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int sum = 0;

	if (head)
	{
		while (current != NULL)
		{
			sum += current->n;
			current = current->next;
		}
	}

	return (sum);
}
