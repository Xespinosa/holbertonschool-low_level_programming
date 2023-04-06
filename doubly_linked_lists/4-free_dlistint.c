#include "lists.h"

/**
 * free_list -free the list
 * @head: start of list
 */

void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head);
		head = head->next;
	}
}
