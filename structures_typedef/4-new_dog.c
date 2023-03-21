#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - new dog
 * @name: dog name
 * @age: dog age
 * @owner: owner name
 * Return: NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;

	ndog = malloc(sizeof(struct dog));
	if (ndog == NULL)
		return (NULL);

	if (name == NULL)
	{
		free(ndog);
		return (NULL);
	}
	ndog->name = malloc(sizeof(char) * (strlen(name) + 1));
	if (ndog->name == NULL)
		return (NULL);
	strcpy(ndog->name, name);

	ndog->age = age;

	if (owner == NULL)
	{
		free(ndog->owner);
		free(ndog);
		return (NULL);
	}
	ndog->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (ndog->owner == NULL)
		return (NULL);
	strcpy(ndog->owner, owner);

	return (ndog);
}
