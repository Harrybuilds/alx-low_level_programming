#include "main.h"

/**
 *_isupper - checking if a character is uppercase
 *@c: the input gotten and inserted into the function
 *Return: return value is dependent on value of input(c)
 */

int _isupper(int c)
{
	if ((c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
