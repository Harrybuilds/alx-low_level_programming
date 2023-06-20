#include "dog.h"

/**
 *free_dog - function to free a struct object
 *@d: struct object to be freed
 *Return: does not expect any return value
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
	else
		free(d);
}
