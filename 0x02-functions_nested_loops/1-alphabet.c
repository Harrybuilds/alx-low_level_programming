#include "main.h"
/**
 * main - start of program
 * Description: prints a to z using _printchar
 * Return: returns 0
 */

int main(void)
{
	char let;

	for (let = 'a'; let <= 'z'; let++)
	{
		_putchar(let);
	}
	_putchar('\n');
	return (0);
}
