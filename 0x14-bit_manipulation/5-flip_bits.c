#include "main.h"

/**
 *flip_bits - function to flip bits
 *@n: first decimal number
 *@m: second decimal  number
 *
 *Return: the decimal representation of the flipped bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	while (xor_result != 0)
	{
		count += xor_result & 1;
		xor_result >>= 1;
	}

	return (count);

}
