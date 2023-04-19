#include <stdlib.h>
/**
 *string_nconcat - function to cancatinate string
 *@s1: first string
 *@s2: second string
 *@n: not sure yet
 *Return: returns the concatenated string thats of char datatype
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *pointer;
	unsigned int len1 = 0, len2 = 0, i = 0, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	if (len2 < n)
		n = len2;
	pointer = malloc(sizeof(char) * (len1 + n + 1));

	if (pointer == NULL)
		return (0);

	while (len1 > i)
	{
		pointer[i] = s1[i];
		i++;
	}

	for  (j = 0; i < (len1 + n); i++, j++)
		pointer[i] = s2[j];

	pointer[i] = '\0';
	return (pointer);
}