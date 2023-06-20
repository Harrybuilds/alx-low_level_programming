#include "dog.h"

/**
 *print_dog - prints details of struct dog type variable address passed to it
 *@d: variable address of struct dog type, which details is to be printed
 *Return: no expected return value
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name == NULL)
			d->name = "(nil)";

		if (d->owner == NULL)
			d->owner = "(nil)";
	}
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);

}
