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

	dog->name = malloc(sizeof(char) * _strlen(name));

	if (!dog->name)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * _strlen(owner));

	if (!dog->owner)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}


	dog->name = strcpy(dog->name, name);

	dog->owner = strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}

/**
 * _strlen - counts length of string
 * @s: string to be counted
 * Return: integer value representing length of string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}
