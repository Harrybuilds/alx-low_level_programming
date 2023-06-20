#ifndef DOG_H
#define DOG_H

#include <stdio.h>
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

/**
 * dog_t - alias for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);

#endif
