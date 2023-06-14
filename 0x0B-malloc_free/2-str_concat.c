#include "main.h"
int _strlen(char *);


/**
 * str_concat - function to concatenate 2 strings
 * @s1: first string
 * @s2: second string to be concatenated
 * Return: pointer to the new strings generated
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i, j, f, s, t;

	if (s1 != NULL)
		f = _strlen(s1);
	else
		f = 0;

	if (s2 != NULL)
		s = _strlen(s2);
	else
		s = 0;


	t = f + s;

	ptr = (char *)malloc(sizeof(char) + t);

	if (ptr == NULL)
		return (NULL);

	i = 0;
	while (i < f)
	{
		ptr[i] = s1[i];
		i++;
	}

	j = 0;
	while (j < s)
	{
		ptr[i] = s2[j];
		i++;
		j++;
	}
	ptr[t] = '\0';

	return (ptr);

}


/**
 * _strlen - function to count string length
 * @str: string whose length is to be determined
 * Return:integer that represent the string length
 */

int _strlen(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);
}
