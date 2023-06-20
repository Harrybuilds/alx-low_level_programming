#include "dog.h"

/**
 *print_dog - prints details of struct dog type variable address passed to it
 *@d: variable address of struct dog type, which details is to be printed
 *Return: no expected return value
 */
void print_dog(struct dog *d)
{
	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %f\nOwner: %s\n", d->age, d->owner ? d->owner : "(nil)");

}
