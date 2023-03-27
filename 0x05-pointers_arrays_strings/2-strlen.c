/**
 *_strlen - function that counts length of string passed to it
 *@s: parameter thats holds the string passed to the function
 *Return: The return value which is the length of the string passed
 */

int _strlen(char *s)
{
	int los = 0;

	for (; *s++; )
		los++;


	return (los);
}
