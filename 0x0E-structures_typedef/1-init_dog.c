#include "dog.h"

/**
 *init_dog - function to initialize a struct dog
 *@d: pointer to struct dog
 *@name: member of the struct dog representing name
 *@age: member of the struct dog representing age
 *@owner: member of the struct dog representing owner
 *Return: no expected return expected
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
/*	d = malloc(sizeof(struct dog));*/

	d->name = name;
	d->age = age;
	d->owner = owner;
}
