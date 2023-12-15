#include "main.h"

/**
 * print_binary - function to convert decimal and print binary
 *
 * @n: integer to be cobverted to binary
 *
 * Return: nothing is returned
 */
void print_binary(unsigned long int n)
{
	/*recursively grab the remainer of dividing input by 2 */
	long int rv;

	if (n == 0)
		return;

	rv = n % 2;
	n = n / 2;
	print_binary(n);
	_putchar(rv);
}
