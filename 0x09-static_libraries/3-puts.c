#include "main.h"

/**
 * _puts - function to print out a string
 * @s: string to be printed
 *Return: does not expect any return value
 */

void _puts(char *s)
{
	while (*s != '\0')
		_putchar(*s);
	_putchar('\n');
}
