#include "lists.h"

/**
 * print_list -  prints everything inside of a list.
 * @h: Adress of the list to print
 * Return: the number of elements printed
 */

size_t print_list(const list_t *h)
{
	size_t k = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		k++;
		h = h->next;
	}
	return (k);
}
