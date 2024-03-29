#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - new dog
 * @name: dog name
 * @age: dog age
 * @owner: owner name
 * Return: pointer on success NULL if fail
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;

	ndog = malloc(sizeof(struct dog));
	if (ndog == NULL)
	{
		free(ndog);
		return (NULL);
	}
	ndog->name = malloc(strlen(name) + 1);
	if (ndog->name == NULL)
	{
		free(ndog->name);
		free(ndog);
		return (NULL);
	}
	else
		strcpy(ndog->name, name);

	ndog->age = age;
	ndog->owner = malloc(strlen(owner) + 1);
	if (ndog->owner == NULL)
	{
		free(ndog->name);
		free(ndog->owner);
		free(ndog);
		return (NULL);
	}
	else
		strcpy(ndog->owner, owner);

	return (ndog);
}
