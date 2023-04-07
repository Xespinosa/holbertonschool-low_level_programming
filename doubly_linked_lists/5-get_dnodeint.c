#include "lists.h"

/**
 * get_dnodeint_at_index - find the node
 * @head: pointer
 * @index: index
 * Return: adress of the node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int k = 0;

	while (head != NULL)
	{
		if (k == index)
		{
			return (head);
		}
		else
		{
			head = head->next;
			i++;
		}
	}
	return (NULL);
}
