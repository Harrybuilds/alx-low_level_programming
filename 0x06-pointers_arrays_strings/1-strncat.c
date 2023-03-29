#include "main.h"

/**
 *_strncat - concatinate 2 strings
 *@src: the string to be concatinated to
 *@dest: the string to
 *@n : the
 *Return: returns a joined string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;
	while  (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
