#include "function_pointers.h"

/**
 *array_iterator - function to interate through an array and perform a task
 *@array: the array to be iterated through
 *@size: size of the array passed
 *@action: function pointer to the function to be invoked
 *Return: no return value expected
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array && action)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}

}
