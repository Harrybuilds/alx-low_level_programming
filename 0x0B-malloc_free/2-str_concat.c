#include <stdlib.h>

/**
 *_len - function to count the lenght of a string
 *@c: char pointer to the first letter of the string to be counter
 *Return: returns an integer value representing the string
 */
int _len(char *c)
{
	int j;

	j = 0;

	while (c[j] != '\0')
		j++;

	return (j);
}


/**
 *str_concat - function that concatenates 2 strings
 *@s1: is a pointer to the first string to be concatinated
 *@s2: is the pointer to the second string to be concatinated
  * Return: returns the concatinated string
 * On error, -1 is returned, and errno is set appropriately
 */
char *str_concat(char *s1, char *s2)
{
	char *ptc;
	unsigned int i, s, j;

	if (s1 == 0)
		s1 = "";

	if (s2 == 0)
		s2 = "";

	s = (_len(s1) + _len(s2) + 1);

	ptc = (char *) malloc(sizeof(char) * s);

	if (ptc == 0)
		return (NULL);

	i = 0;
	while (*(s1 + i) != '\0')
	{
		*(ptc + i) = *(s1 + i);
		i++;
	}

	j = 0;
	while (*(s2 + j) != '\0')
	{
		*(ptc + i) = *(s2 + j);
		i++;
		j++;
	}

	return (ptc);
}