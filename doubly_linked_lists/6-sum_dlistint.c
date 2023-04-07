#include "lists.h"

/**
 * sum_dlistint - sum the n
 * @head: start point
 * Return: the sum of all ns
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
