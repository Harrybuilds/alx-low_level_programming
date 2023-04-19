 #include <stddef.h>
/**
 *array_iterator - a function pointer that points to an array iterator function
  *@arry: array to be passed to the function pointer 
 *@size: size of array being passed
 *@action: function that contains the manipulation/operation to be done on the array being passed
 *Return: does not expect any return value
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array == NULL || size <= 0 || action == NULL)
		return;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
