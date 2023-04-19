#include <stdio.h>
/**
 *int_index - an array function pointer performing an action on an array passed
 *to it using the function that it is pointing to in carry out the operation on
 *the array passed to it
 *
 *@array: array to be passed that is to be operated/manipulated on
 *
 *@size: The size of array being passed to the function
 *
 *@cmp: pointer to the function that will do the operation/manipulation
 *
 *Return: returns first index of value being
 * searched for in the ponted function
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size < 0 || cmp == NULL)
		return (-1);

	while (i < size)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
		else
			i++;
	}
	return (-1);
}
