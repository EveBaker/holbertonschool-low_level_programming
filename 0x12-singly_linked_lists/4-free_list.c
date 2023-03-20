#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list
 * @head: the pointer to the first node of a linked list
 *
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *temp;

		while (head)
		{
			temp = head;
			head = head->next;
			free(temp->str);
			free(temp);
		}

	free(head);
}
