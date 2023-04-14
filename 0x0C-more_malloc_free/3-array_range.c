#include <stdlib.h>

/**
 *array_range - function to
 *@min: first argument
 *@max: second argument
 *Return: returns an integer
 */

int *array_range(int min, int max)
{
	int *pointer;
	int j = 0;

	if (max < min)
		return (NULL);

	pointer = malloc(((max - min) + 1) * sizeof(*pointer));

	if (pointer == 0)
		return (NULL);

	while (max >= min)
	{
		pointer[j] = min;
		j++;
		min++;
	}

	return (pointer);

}
