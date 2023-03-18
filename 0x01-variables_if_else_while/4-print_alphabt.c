#include <stdio.h>
/**
  *main - programs starts here
  *Description    a program to print all alphabets except q and e
  *Return: it returns O
 */

int main(void)
{
	char ch;

	ch = 'a';

	do {
		if ((ch == 'e') || (ch == 'q'))
		{
			ch++;
			continue;
		}
		putchar(ch);
		ch++;
	} while
		(ch <= 'z');
	putchar('\n');
	return (0);
}
