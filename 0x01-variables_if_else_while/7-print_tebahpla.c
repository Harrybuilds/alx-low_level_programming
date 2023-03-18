#include <stdio.h>
/**
  *main - stat of the program
  *Description  prints all lowercase alphabet in reverse order
  *Return: returns 0 as success
 */

/*program starts here*/
int main(void)
{
	char ch;
/*for loop to prints lowercase alphabet in reverse */
	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
	putchar('\n');
	return (0);
}
