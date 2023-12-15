#include "main.h"

/**
 *print_binary -function to printthe binary representation
 *@n: the integer to be printed in binary
 *
 *Return: no return value expected
 */

void print_binary(unsigned long int n)
{
	int leading_zeros = 1;
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);

	if (n == 0)
	{
		_putchar("0");
		return;
	}

	while (mask > 0)
	{
		if (n & mask)
			leading_zeros = 0;
		if (!leading_zeros)
			printf("%d", (n & mask) ? 1 : 0);
		mask >>= 1;
	}

}
