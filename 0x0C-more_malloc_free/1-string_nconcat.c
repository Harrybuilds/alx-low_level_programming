#include "main.h"

/**
 * string_nconcat - function toconcatenate 2 strings
 * @s1: first string
 * @s2: second string
 * @n: number of 2nd string to be concat to first sring
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new;
	unsigned int f, c, sc;

	f = _strlen(s1);

	new = malloc(sizeof(char) * (f + n));

	if (new == NULL)
		return (NULL);

	 c = 0;

	 while (s1[c])
	 {
		 new[c] = s1[c];
		 c++;
	 }

	 sc = 0;
	 while (sc < n)
	 {
		 new[c] = s2[sc];
		 c++;
		 sc++;
	 }
	 new[c] = '\0';

	return (new);
}


/**
 * _strlen - counts length of string
 * @s: string whose length is to be counted
 * @Return: length of string passed to it
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}


