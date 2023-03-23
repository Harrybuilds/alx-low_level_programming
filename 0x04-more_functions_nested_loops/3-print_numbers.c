#include "main.h"
/**
 *print_numbers - prints number to the standand out(the screen)
 *starting at 0 to 9
 * using the locally defined _putchar function
 */

void print_numbers(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
