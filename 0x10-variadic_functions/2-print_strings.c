#include <stdio.h>
#include <stdarg.h>

/**
 *print_strings - function to print numbers
 *@separator: pointer to separatorthat separates the string
 *@n:  number of string passed to he function
 *Return: does not expect any return
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *let;
	va_list strings;


	va_start(strings, n);

	while (i < n)
	{

		let = va_arg(strings, char *);
		if (let == 0)
			printf("(nil)");
		else
			printf("%s", let);

		if ((n - 1) != i &&  separator != NULL)
			printf("%s", separator);
		i++;
	}
	printf("\n");

	va_end(strings);
}
