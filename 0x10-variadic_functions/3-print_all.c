#include "variadic_functions.h"
int _strlen(const char *s);

/**
 *print_all - function that prints all based on its type 
 *@format: list of types passed to the argument
 *
 *Return: no expected return value
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int len = _strlen(format), j;
	double f;
	int i;
	char c;
	char *s;

	va_start(args,format);

	j = 0;
	while (i < len)
	{
		if (format[i] == 'i')
		{
			i = va_arg(args, int);
			printf("%d ", i);
		}
		else if (format[i] == 'f')
		{
			f =  va_arg(args, double);
			printf("%f ", f);
		}
		else if (format[i] == 'c')
		{
			c = va_arg(args, int);
			printf("%c ", c);
		}
		else
		{
			printf("%s ", va_arg(args, char *));
			
		}


		i++;
	}
	va_end(args);
	printf("\n");
}

int _strlen(const char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		i++;
	}

	return (i);
}

int main()
{
	print_all("wha", "Hello", "world", "come");

	return (0);
}
