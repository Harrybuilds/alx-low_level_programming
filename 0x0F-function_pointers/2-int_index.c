#include "function_pointers.h"

/**
 *int_index - searches for an integer
 *@array: array in which the integer is searched for
 *@size: size of the array
 *@cmp: function pointer
 *Return: first index of integer if found else -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, holder;

	if (size < 1)
		return (-1);

	i = 0;
	while (i < size)
	{
		holder = cmp(array[i]);
		if (holder != 0)
			return (i);
		i++;
	}

	return (-1);/*will onbe be if all elements evaluate to false*/
}
