#include "main.h"

/**
 *print_rev - function to print reverse charater in string
 *@s: string to be printed reversed
 */

void print_rev(char *s)
{
	int a = 0, b;

	while (s[a] != '\0')
	{
		a++;
	}

	for (b = a - 1; b >= 0; b--)
	{
		_putchar(s[b]);
	}
	_putchar('\n');
}
