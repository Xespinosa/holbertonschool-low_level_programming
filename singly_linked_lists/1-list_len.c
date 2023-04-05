#include "lists.h"

/**
 * list_len - prints length of the list
 * @h:list to be counted
 * Return: the length of the list
 */

size_t list_len(const list_t *h)
{
	size_t kip = 0;

	while (h != NULL)
	{
		kip++;
		h = h->next;
	}

	return (kip);
}
