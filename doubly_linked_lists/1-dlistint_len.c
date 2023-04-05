#include "lists.h"

/**
 * dlistint_len - count the length of a double list
 * @h: adress of the list to be counted
 * Return: the length of the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t k = 0;

	while (h != NULL)
	{
		k++;
		h = h->next;
	}
	return (k);
}
