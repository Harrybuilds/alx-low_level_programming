#include "variadic_functions.h"


/**
 *sum_them_all - function to sum up integers passed to it
 *@n: count of ingegers passed to it
 *
 *Return: sum of of integer passed
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	unsigned int i;

	va_start(args, n);
	i = 0;
	while (i < n)
	{
		sum += va_arg(args, int);
		i++;
	}
	va_end(args);

	return (sum);
}
