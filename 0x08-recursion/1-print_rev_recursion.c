#include "main.h"

/**
 * _print_rev_recursion - reverse a string
 * @s : string to be reversed
 * Return: does not expect any return value
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	_print_rev_recursion(s + 1);
	_putchar(*s);
}