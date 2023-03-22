#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 *main - start of all c programs
 *Return: 0 shows program ran successfully
*/
void positive_or_negative(int n)
{
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
}
