#include "main.h"

/**
 *_putchar - function to prints each character in string
 *@c : character to be printed
 *Return: numbers of characters printed
 */

int _putchar(char c)
{
	int i = 0;

	while (c != '\0')
	{
		write(1, &c, 1);
		i++;
	}
	return (i);
}
