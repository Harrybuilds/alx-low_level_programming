#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>
/* more headers goes there */

/**
  *main - program starts at main
  *Description   get the last character of a number 5
  *Return: 0 means successful program
 */
/* betty style doc  for function main goes there */
int main(void)
{
	int n;
	int last_cha;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_cha = n % 10;

	/* your code goes there */
	if (last_cha == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last_cha);
	}
	else if (last_cha > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_cha);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_cha);
	}
	return (0);
}
