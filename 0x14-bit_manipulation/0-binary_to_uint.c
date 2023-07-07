#include "main.h"


/**
 *binary_to_uint - function to convert binary to an unsigned int
 *@b: pointer to string representing the binary
 *
 *
 *Return: an unsigned int representing the decimal coversion of the binary or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int converted = 0, i = 0;
	char current;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		current = b[i];
		if (current != '0' && current != '1')
			return (0);
		converted = converted * 2 + (current - '0');
	}
	return (converted);
}
