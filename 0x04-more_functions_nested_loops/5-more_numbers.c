#include "main.h"

/**
 *more_numbers - function to print 0 to 14 10times
 *using the locally built _putchar to print to the standard output(the screen)
 *_putchar can only be used 3 times
 */

void more_numbers(void)
{
	int n, count;

	for (count = 0; count < 10; count++)
	{
		for (n = 0; n < 15; n++)
		{
			if (n > 9)
			{
				_putchar((n / 10) + '0');
			}
			_putchar((n % 10) + '0');
		}
	_putchar('\n');
	}

}
