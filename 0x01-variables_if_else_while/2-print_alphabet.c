#include <stdio.h>
/**
 *main - start of program
 *Description print a to z all lowercase
 *Return: 0 (successful)
*/

int main(void)
{
	int  ch;

	ch = 97;
	while (ch <= 122)
	{
		putchar(ch);
		ch++;
	}
	{
	putchar('\n');
	}
	return (0);
}
