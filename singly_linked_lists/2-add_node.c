#include "lists.h"
/**
 * add_node -  adds a new node
 * @head: Pointer with the address
 * @str: Pointer address of the string
 * Return: adress of the node created
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *kip;
	unsigned int i;

	kip = malloc(sizeof(list_t));
	if (kip == NULL)
	{
		return (NULL);
	}
	kip->str = strdup(str);
	if (kip->str == NULL)
	{
		free(kip);
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	kip->len = i;
	new->kip = *head;
	*head = kip;
	return (kip);
}
