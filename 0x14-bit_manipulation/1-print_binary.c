#include "main.h"

/**
 * print_binary -function that prints the binary equivalent of a decimal number
 * @n: the number to be printed in binary form
 */
void print_binary(unsigned long int n)
{
	unsigned int j, counter = 0;
	unsigned long int current;

	j = 63;
	while (j >= 0)
	{
		current = n >> j;

		if (current & 1)
		{
			_putchar('1');

			counter++;
		}
		else if (counter)
			_putchar('0');
		--j;
	}
	if (!counter)
		_putchar('0');
}
