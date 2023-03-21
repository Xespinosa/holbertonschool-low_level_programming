#include "dog.h"
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
	new_dog = malloc(sizeof(struct dog));
	if (new_dog == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	if (name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->name = malloc(sizeof(char) * (strlen(name) + 1));
	if (new_dog->name == NULL)
	{
		free(new_dog->name);
		return (NULL);
	}
	else
		strcpy(new_dog->name, name);

	new_dog->age = age;

	if (owner == NULL)
	{
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}
	new_dog->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (new_dog->owner == NULL)
	{
		free(new_dog->owner);
		return (NULL);
	}
	else
		strcpy(new_dog->owner, owner);

	return (new_dog);
}
