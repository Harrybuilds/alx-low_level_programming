#include "main.h"

/**
 *_strncpy - copies a string to another string regard the b
 *@src: source string being copied
 *@dest: destination of string being copied
 *@n: byte of dest
 *Return: the destination string copied
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}

	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
