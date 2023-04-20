#include <stdarg.h>
/**
 *ssum_them_all - function to sum up all argument passed
 *@n: first argument
 *@...: other arguments to be passed
 *Return: returns an integer
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;
	unsigned int sum = 0, count = 0;

	va_start(numbers, n);

	while (count < n)
	{
		sum += va_arg(numbers, int);
		count++;
	}
	va_end(numbers);

	return(sum);
}
