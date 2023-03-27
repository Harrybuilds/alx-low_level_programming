#include "main.h"

/**
 *_puts - function to print character and a new line
 *@str: variable parameter holding character to be printed
 */

void _puts(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		_putchar(str[a]);
	a++;
	}
	_putchar('\n');


}
