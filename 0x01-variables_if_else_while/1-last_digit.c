#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>
/* more headers goes there */

/**
  *maim - program starts at main
  *Description   get the last character of a number 5
  *Return: 0 means successful program
 */
/* betty style doc  for function main goes there */
int main(void)
{
	int n;
	int last_char;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_char = n % 10;

	/* your code goes there */
	if (last_char == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last_char);
	}
	else if (last_char > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_char);
	}
	else 
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_char);
	}
	return (0);
}
