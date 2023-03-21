 #include "main.h"

/**
 * print_alphabet_x10 - print lowercase aplabets 10times
 */

void print_alphabet_x10(void)
{
	char l;
	int count = 0;

	while (count <= 9);
	{
		for (l = 'a'; l <= 'z'; l++)
		{
			_putchar(l);
		}
	}
	_putchar('\n');
}
