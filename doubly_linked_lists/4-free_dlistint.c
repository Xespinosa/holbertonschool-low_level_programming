#include "lists.h"

/**
 * free_dlistint - free the list
 * @head: start of list
 */

void free_dlistint(dlistint_t *head)
{
	while (head != NULL)
	{
		free(head);
		head = head->next;
	}
}
