#include "main.h"

/**
 *print_most_numbers - prints numbers from 0 to 9 except 2 and 4
 *uses locally built print function _putchar that is stored in the
 *local library main.h
 *_putchar can only be used twice in this program
 */

void print_most_numbers(void)
{
	/*using char data type because of the _putchar function*/
	char  n;

	for (n = 48; n < 58; n++)
	{
		if ((n == 50 || n == 52))
		{
			continue;
		}
		_putchar(n);


		/**
		 *mistake that got me thinking
		 * if ((n == 50 || n == 52))
		 *{
		 *	continue;
		 *	_putchar(n);
		 *}
		 */
	}
	_putchar('\n');
}
