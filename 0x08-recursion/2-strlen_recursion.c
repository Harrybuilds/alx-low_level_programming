#include "main.h"

/**
 *_strlen_recursion - recursive function to count a string
 @s: string length to be counted
 *@Return: length of characters in string
 */
 
int _strlen_recursion(char *s)
{
	int i = 1;
	if (*s == '\0')
		return (0);
	return (i + _strlen_recursion(s + 1));
}
