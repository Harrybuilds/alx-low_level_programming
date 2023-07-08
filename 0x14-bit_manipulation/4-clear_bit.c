#include "main.h"


/**
 *clear_bit - function to clear bit at a given index
 *@n: pointer to
 *@index: given index of bit to be cleared starting at 0
 *
 *Return: returns 1 if succssful else -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mas;

	if (index >= 8 * sizeof(unsigned long int))
	{
		/*Invalid index*/
		return (-1);
	}

	mas = ~(1UL << index);
	*n &= mas;
	return (1);

}
