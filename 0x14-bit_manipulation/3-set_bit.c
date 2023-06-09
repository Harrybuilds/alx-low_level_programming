#include "main.h"

/**
 *set_bit - function to set bit
 *@n: pointer to
 *@index: given index of bit to be set starting from 0
 *
 *Return: returns 1 if it works else -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		 /*Error: Invalid index*/
		return (-1);
	*n |= 1UL << index;
	 /*Success*/
	return (1);
}
