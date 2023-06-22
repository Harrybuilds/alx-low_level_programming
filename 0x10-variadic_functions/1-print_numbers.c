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
	{
		i = 0;
		while (i < n)				
		{
			printf("%d", va_arg(args, int));
			i++;
		}
	}
	else
	{

		i = 0;
		while(i < n)
		{
			printf("%d%s", va_arg(args, int), separator);
			i++;
		}
	}
	va_end(args);

	printf("\n");

}
