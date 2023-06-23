#include "variadic_functions.h"

/**
 *print_strings - prints strings in a variadic function
 *@separator: separator after each string printed
 *@n: argument count
 *Return: no expected return value
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int i;
	va_list args;

	va_start(args, n);

	if (separator == NULL)
		separator = "";

	i = 0;
	while (i < n)
	{
		if (i < (n - 1))
		{
			str = va_arg(args, char *);
			if (str == NULL)
			{
				str = "(nil)";
				printf("%s%s", str, separator);
			}
			else
				printf("%s%s", str, separator);
			i++;
		}
		else
		{
			printf("%s", va_arg(args, char *));
			break;
		}
	}
	va_end(args);
	printf("\n");
}

