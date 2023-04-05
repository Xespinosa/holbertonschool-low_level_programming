#include "lists.h"

/**
 * add_dnodeint - add new node
 * @head: reference node
 * @n: number to be saved
 * Return: the adress of the new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t kip;

	kip = malloc(sizeof(dlistint_t));
	if (kip == NULL)
		return (NULL);
	kip->n = n;
	kip->next = *head;
	kip->prev = NULL;
	if (*head != NULL)
		(*head)->prev = kip;
	*head = kip;

	return (kip)
}
