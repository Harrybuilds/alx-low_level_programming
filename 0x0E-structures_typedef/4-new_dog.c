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

	dog->name = malloc(_strlen(name) + 1);

	if (!dog->name)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(_strlen(owner) + 1);

	if (!dog->owner)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}


	dog->name = _strcpy(dog->name, name);

	dog->owner = _strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}


/**
 * _strlen - function to count the length of string
 * @s: the string length to be counted
 * Return: integer value representing length of string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}

/**
*_strcpy - function to copy src string into dest string
*@dest: destination to which string is copied to
*@src: source from which string is copied from
*Return: destination string is returned
*/


char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
