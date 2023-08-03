#include "main.h"

/**
 *_putchar - function to print character passed to it
 *@c: character to be printed
 *
 *Return: number of character printed
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
