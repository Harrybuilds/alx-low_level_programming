#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in a sorted array of integers
 *                        using the Interpolation search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: The first index where the value is located, or -1 if the value
 *         is not present or if the array is NULL
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t pos;
	int sub;

	if (array == NULL)
		return (-1);

	while (low <= high && value >= array[low] && value <= array[high])
	{
		sub = (value - array[low]);
		/* Calculate the probe position */
		pos = low + (((double)(high - low) / (array[high] - array[low])) * sub);

		/* Print the value checked at the probe position */
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

		/* If the probe position is out of range */
		if (pos >= size)
		{
			printf("Value checked array[%lu] is out of range\n", pos);
			return (-1);
		}

		/* If the value is found at the probe position */
		if (array[pos] == value)
			return ((int)pos);

		/* If the value is greater, ignore the left half */
		if (array[pos] < value)
			low = pos + 1;

		/* If the value is smaller, ignore the right half */
		else
			high = pos - 1;
	}

	/* If the value is not present in the array */
	return (-1);
}
