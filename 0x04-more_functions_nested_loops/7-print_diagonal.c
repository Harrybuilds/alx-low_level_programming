#include "main.h"

/**
 *print_diagonal - a function that prints diagonal
 *@n: the number of times to ptint the diagonal
 */

void print_diagonal(int n)
{
	int l, r;

	if (n > 0)
	{
		for (l = 0; l <= n; l++)
		{
			for (r = 0; r < l; r++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
