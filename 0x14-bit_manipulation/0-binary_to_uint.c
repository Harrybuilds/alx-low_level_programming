#include "main.h"

/**
 * binary_to_uint - converts binary to decimal using Left Shift operator
 *
 * @b: string representation of the binary number to be converted to decimal
 *
 * Return: decimal representation of the binary number or 0 if there one or
 * more character that cannot be converted in the string or NULL if b is null
*/

unsigned int binary_to_uint(const char *b)
{

	unsigned int unsigned_val, rv = 0, iterator = 0, remainder;
	int converted_val;

	/*verify argument is not NULL*/
	if (b == NULL)
		return (0);

	/*get integer representation of binary value passed*/
	converted_val = atoi(b);

	/*ensure it is an unsigned integer*/
	unsigned_val = (converted_val > 0 ? converted_val : -converted_val);

	/*check if to continue operation or stop execution*/
	if (unsigned_val == 0)
		return (0);

	/*if unsigned value greater than 0, then get the decimal representation*/
	while (unsigned_val != 0)
	{
		remainder = unsigned_val % 10;
		rv += remainder << iterator;
		unsigned_val = unsigned_val / 10;
		iterator++;
	}

	/*verify that conversion by atoi function was not stopped by a character*/
	if (iterator != strlen(b))
	{
		/*if conversion was stopped by a character*/
		/*set the decimal representation to 0*/
		if (b[iterator] < 48 || b[iterator] >= 57)
			rv = 0;
	}

	/*return the decimal representation of the binary number*/
	return (rv);
}
