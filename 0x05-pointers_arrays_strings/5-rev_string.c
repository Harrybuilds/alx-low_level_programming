#include "main.h"

/**
 *rev_string - function to print reverse charater in string
 *@s: string to be printed reversed
 */

void rev_string(char *s)
{

	char rev = s[0];
	int c = 0, b;

	while (s[c] != '\0')
	{
		c++;
	}
	for (b = 0; b < c; b++)
	{
		c--;
		rev = s[b];
		s[b] = s[c];
		s[c] = rev;
	}

}
