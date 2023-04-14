#include <stdlib.h>

/**
 *_realloc - function that reallocate a memory block
 *@ptr: memory previously allocated
 *@old_size:size in byte of the memory allocated for ptr
 *@new_size:new size in byte of new memory block to be allocated
 *Return:the value to be returned is dependent on the status of the pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

	if (ptr != 0 && new_size  == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == 0)
		ptr = malloc(new_size);

	while (old_size == new_size)
	{
		return (ptr);
	}

	free(ptr);

	ptr = malloc(new_size);

	return (ptr);
}
