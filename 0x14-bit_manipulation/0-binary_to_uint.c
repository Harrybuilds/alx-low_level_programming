#include "main.h"


/**
 *binary_to_uint - function to convert binary to an unsigned int
 *@b: pointer to the string representing the binary number
 *
 *
 *Return: an unsigned int representing the decimal of the binary or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int rv = 0, i = 0;
	char current;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		current = b[i];
		if (current != '0' && current != '1')
			return (0);
		rv = rv * 2 + (current - '0');
	}
	return (rv);
}
