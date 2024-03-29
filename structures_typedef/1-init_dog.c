#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * init_dog - initialize dog
 * @d: dog
 * @name: dog name
 * @age: dog age
 * @owner: owner name
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}

	d->name = name;
	d->age = age;
	d->owner = owner;
}
