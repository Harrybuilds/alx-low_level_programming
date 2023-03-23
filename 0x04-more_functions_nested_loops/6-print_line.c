#include "main.h"

/**
 *print_line - function to print line
 *@n:number of times to print '_'
 */

void print_line(int n)
{
	int line;

	if (n > 0)
	{
		for (line = 0; line <= n; line++)
		{
			_putchar ('_');
		}
	_putchar('\n');
	}

	else
	{
		_putchar('\n');
	}
}
