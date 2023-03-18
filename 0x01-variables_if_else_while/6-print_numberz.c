#include <stdio.h>
/**
  *main - stat of the program
  *Description  prints all numbers below 10
  *Return: returns 0 as success
 */

/*program starts here*/
int main(void)
{
	int num;
	/*for loop to prints numbers below 10*/
	for (num = 0; num < 10; num++)
		putchar(num + 48);
	putchar('\n');
	return (0);
}
