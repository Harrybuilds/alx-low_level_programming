#include "main.h"

/**
 * _strdup - function to return pointer to a duplicate of string passed to it
 *@str: string passed to it
 *
 *Return: returns pointer to string if successful else NULL
 */

char *_strdup(char *str)
{
	char *ptr;
	int i = 0;

	if (str == NULL)
		return (NULL);

	while (str[i])
		i++;

	ptr = (char *)malloc(sizeof(char) * i);

	if (ptr == NULL)
		return (NULL);

	i = 0;


	while (str[i])
	{
		ptr[i] = str[i];
		i++;
	}

	return (ptr);
}
