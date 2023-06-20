#include "dog.h"

/**
 *new_dog - function to create a new dog aka a constructor in oop
 *@name: name of new dog to be created
 *@age: age of new dog to be created
 *@owner: owner's name of new dog created
 *Return: returns the new dog object created
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	dog->name = name;
	dog->owner = owner;
	dog->age = age;

	return (dog);
}
