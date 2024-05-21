#include "search_algos.h"

/**
 * print_array - Prints the current array being searched
 * @array: The array to be printed
 * @left: The left index of the subarray
 * @right: The right index of the subarray
 */
void print_array(int *array, size_t left, size_t right)
{
	size_t i;

	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		printf("%d", array[i]);
		if (i < right)
			printf(", ");
	}
	printf("\n");
}

/**
 * recursive_advanced_binary - Helper function to perform binary search
 * @array: Pointer to the first element of the array to search in
 * @left: Left index of the subarray to search
 * @right: Right index of the subarray to search
 * @value: Value to search for
 *
 * Return: Index where value is located, or -1 if not found
 */
int recursive_advanced_binary(int *array, size_t left, size_t right, int value)
{
	size_t mid;

	if (left > right)
		return (-1);

	print_array(array, left, right);

	mid = left + (right - left) / 2;

	if (array[mid] == value)
	{
		/* Ensure this is the first occurrence */
		if (mid == left || array[mid - 1] != value)
			return (mid);
		else
			return (recursive_advanced_binary(array, left, mid, value));
	}
	else if (array[mid] < value)
	{
		return (recursive_advanced_binary(array, mid + 1, right, value));
	}
	else
	{
		return (recursive_advanced_binary(array, left, mid - 1, value));
	}
}

/**
 * advanced_binary - Searches for a value in a sorted array of integers
 *                   using the advanced binary search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: The index where the value is located, or -1 if the value
 *         is not present or if the array is NULL
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (recursive_advanced_binary(array, 0, size - 1, value));
}
