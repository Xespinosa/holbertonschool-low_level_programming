#include "lists.h"

/**
 * print_dlistint - print doubly linked list
 * @h: pointer for where to begin
 * Return: number or elements printed
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t k = 0;

	while (h != NULL)
	{
		printf("%d", h->n);
		k++;
		h = h->next;
	}
	return (k);
}
