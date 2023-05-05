#include "main.h"

/**
 *get_bit - function to return d value of a bit at an index in a decimal form
 * @n: the number to be searched
 * @index: index of the bit
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	if (index > 63)
		return (-1);

	bit_value = (n >> index) & 1;

	return (bit_value);
}
