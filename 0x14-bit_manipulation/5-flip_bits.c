#include "main.h"

/**
 * flip_bits - function to counts the number of bits to change
 * to get from one number to another
 *
 * @n: the first number
 * @m: the second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j = 63, counter = 0;
	unsigned long int present;
	unsigned long int exclusive = n ^ m;


	while (j >= 0)
	{
		present = exclusive >> j;

		if (present & 1)
			counter++;
		j--;
	}

	return (counter);
}
