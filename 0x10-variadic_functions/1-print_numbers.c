#include "variadic_functions.h"


/**
 *print_numbers - function to print integer argument passed to it
 *@separator: argument to be printed after each integer printed
 *@n: argument count
 *
 *Return: does return anything
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	if (separator == NULL)
		separator  = "";

	i = 0;
	while (i < n)
	{
		if (i < (n - 1))
		{
			printf("%d%s", va_arg(args, int), separator);
			i++;
		}
		else
		{
			printf("%d", va_arg(args, int));
			break;
		}
	}
	va_end(args);

	printf("\n");

}
