#include <stdio.h>
/**
 *main - start of program
 *Description print a to z all lowercase
 *Return: 0 (successful)
*/

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
		putchar('\n');
		
	}

	return (0);
}
