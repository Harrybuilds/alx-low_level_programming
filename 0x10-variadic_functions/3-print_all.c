#include <stdio.h>
#include <stdarg.h>

/**
 *print_all - prints anything passed to it
 *@format: the format in whivh a data is passed to the function
 *Return: doesn't return anything
 *
 *
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *srt,  *sep = "";
	va_list printer;

	va_start(printer, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
			case 's':
				srt = va_arg(printer, char *);
				if (!srt)
					srt = "(nil)";
				printf("%s%s", sep, srt);
				break;
			case 'i':
				printf("%s%i", sep, va_arg(printer, int));
				break;
			case 'c':
				printf("%s%c", sep, va_arg(printer, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(printer, double));
				break;
			default:
				i++;
				continue;
			}
			sep = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(printer);
}
