#include "main.h"

/**
 *binary_to_uint - function to convert a binary number to unsigned int
 *@b: the string representing the binary number
 *
 *Return:d converted binary num representing the string passed to the function
 */
unsigned int binary_to_uint(const char *b)
{
	int j;
	unsigned int decimal_value = 0;

	if (!b)
		return (0);

	j = 0;
	while (b[j])
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		decimal_value = 2 * decimal_value + (b[i] - '0');
		j++;
	}

	return (decimal_value);
}
