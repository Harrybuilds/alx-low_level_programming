#include "main.h"

/**
 *_puts_recursion -function to recursively print out all characters of a string
 *@s: string whose characters are to be printed out
 * Return : does not expect any return value
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
