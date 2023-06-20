#ifndef DOG_H
#define DOG_H

#include <stdlib.h>

/**
 * struct dog - stucture declaration for dog type
 * @name: member of struct dog representing name
 * @age: member of struct dog representing age
 * @owner: member of struct dog representing owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
