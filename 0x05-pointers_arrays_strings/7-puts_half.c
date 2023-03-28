#include "main.h"

/**
 *puts_half - funtion to print half of string passed to it
 *@str: expected input to be manupulated
 */
void puts_half(char *str)
{
	int len =  0;


	while (*str != '\0')
	{
		len++;
		str++;
	}

	str -= (len / 2);

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
