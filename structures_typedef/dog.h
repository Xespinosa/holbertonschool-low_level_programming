#ifndef MAIN_H
#define MAIN_H

/**
 * struct dog - this is a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Description: this is a theoretical
 * quadrapedal mammalian known
 * for it's companionship
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
