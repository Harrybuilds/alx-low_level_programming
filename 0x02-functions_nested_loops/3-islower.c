#include "main.h"

/**
 *_islower - check for case status
 *@c: get an input to be checked
 *Return: returns eithee 1 or 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}