#include "main.h"

/**
 * malloc_checked - function to allocate memory
 * @b: unsigned int value representing the space to be passed to malloc call
 * Return: returns a pointer to the allocated space if successful else exit
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = ((*b) *)malloc(sizeof(*b) * b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
