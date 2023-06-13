#include "main.h"

/**
 * create_array - a function to create an array on the dynamic memory
 * @size: size of the array
 * @c: character to be populated into the dynamic memory
 * Return: returns pointer to allocated memoey if success else NULL
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *ptr;

	if (size == 0)
		return (NULL);
	ptr = (char *)malloc(sizeof(char) * size);
	if (ptr != NULL)
	{
		while (i < size)
		{
			ptr[i] = c;
			i++;
		}
	}
	else
		return (NULL);

	return (ptr);
}

