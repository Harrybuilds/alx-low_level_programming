#include <stdlib.h>

/**
 *_calloc - function to allocate memory to an array
 *@nmemb: first argument
 *@size: second argument
 *Return: can be type cast to any data-type
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pointer;
	unsigned int j = 0;

	if (size == 0 || nmemb == 0)
		return (NULL);

	pointer = malloc(size * nmemb);

	if (pointer == 0)
		return (NULL);

	while (j < (size * nmemb))
	{
		pointer[j] = 0;
		j++;
	}

	return (pointer);
}
