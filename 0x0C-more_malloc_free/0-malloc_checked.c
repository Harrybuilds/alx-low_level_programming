#include <stdlib.h>

/**
 *malloc_checked - function to check for space allocated in heap memory
 *@b: argument to be passed
 *Return: returns a void data type
 */

void *malloc_checked(unsigned int b)
{

	void *pointer;

	pointer = malloc(b);

	if (pointer == 0)
	{
		exit(98);
	}
	return(pointer);
}
