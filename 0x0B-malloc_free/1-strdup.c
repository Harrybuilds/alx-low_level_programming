#include <stdlib.h>

/**
 * _strdup - function that copies a string passed to a pointer
 * @str: is a pointer
  * Return: returns a string copy
 * On error, -1 is returned, and errno is set appropriately
 */
char *_strdup(char *str)
{
	char * copy;
	unsigned int i = 0 , length = 0;

	if (str == 0)
		return (NULL);

	while (str[length])
		length++;

	copy = malloc (sizeof(char) * (length +1));

	if ((copy[i] = str[i]) == 0)
		return (NULL);

	while ((copy[i] = str[i]) != '\0')
		i++;


	return (copy);

}
