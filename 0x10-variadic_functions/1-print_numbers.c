#include <stdio.h>
#include <stdarg.h>

/**
 *print_numbers - function to print numbers
 *@separator: string to be printed between integers
 *@n:integers passed to the function
 *Return: does not expect any return
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list(numbers);
	va_start(numbers, n);


	while (i < n)
	{
		printf("%i", va_arg(numbers, int));

		if (separator != NULL)
			printf("%s", separator);
		else if ((n - 1) != i)
			printf("%s", separator);
		i++;
	}
	printf("\n");

	va_end(numbers);

	return;
}
