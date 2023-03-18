/*import header file*/
#include <stdio.h>

/**
  *main - start program
  *Description   print hexadecimal character
  *Return: will return 0
 */

/*start function*/
int main(void)
{
	int num;
	char alpha;

	num = 48;
	alpha = 'a';
	while (num < 58)
	{
		putchar(num);
		num++;
	}
	while (alpha < 'g')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');

	return (0);
}
