#include "main.h"


/**
 *get_bit - function to get bit
 *@n: unsigned long int
 *@index:indexof bit yo be gotten starting from zero
 *
 *Return:value of bit at the given index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
	       /* Error: Invalid index*/
		return (-1);
	return ((n & mask) ? 1 : 0);
}
