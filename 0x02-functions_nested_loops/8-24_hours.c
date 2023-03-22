#include "main.h"

/**
 *jack_bauer - starts the program from this point
 */

void jack_bauer(void)
{
	int hr, min;

	for (hr = 0; hr < 25; hr++)
	{
		for (min = 0; min < 61; min++)
		{
			_putchar((hr / 10) * '0');
			_putchar((hr % 10) * '0');
			_putchar(':');
			_putchar((min / 10) * '0');
			_putchar((min % 10) * '0');
			_putchar('\n');
		}
	}
}
