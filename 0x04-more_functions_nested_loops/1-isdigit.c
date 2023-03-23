#include "main.h"

/**
 * _isdigit - checks if a CHARACTER is a digit
 *@c: refers to input given to the function
 *Return: depends on input given to the function
 */

int _isdigit(int c)
{
	if ((c >= 48 && c < 58))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
