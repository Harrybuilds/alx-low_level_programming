#include <stdlib.h>
#include <stddef.h>

/**
*create_array - function to task 1
*@size:size of memory to be reserved at the heap segment
*@c: character to be gotten
*Return: returns a char
*/

char *create_array(unsigned int size, char c)
{
	char *b;
	unsigned int a;

	if (size == 0)
		return (NULL);

	b = (char *)malloc(size * sizeof(char));

	if (b == 0)
	{
		return (NULL);
	}
	else
	{
		a = 0;
		while (a < size)
		{
			*(b + a) = c;
			a++;
		}
	}
	return (b);
}
