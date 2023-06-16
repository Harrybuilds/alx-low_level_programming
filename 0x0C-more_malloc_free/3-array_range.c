#include "main.h"

/**
 * array_range - function to creates an array of integers.
 * @min: the minimum value.
 * @max: the maximum value.
 *
 * Return: pointer to the newly created array.
 * if man > mix, returns NULL.
 * if malloc fails, returns NULL.
 */
int *array_range(int min, int max)
{
	int *arr;
	int in;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(*arr) * ((max - min) + 1));

	if (arr == NULL)
		return (NULL);

	for (in = 0; min <= max; in++, min++)
		arr[in] = min;

	return (arr);
}
