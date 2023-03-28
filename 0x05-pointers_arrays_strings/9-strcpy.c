/**
 *_strcpy - function that copies the string pointed to by src
  *@dest: destination to be copied to
 *@src: source to be copied from
 *Return: returns character type
 */

char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (*(src + len) != '\0')
	{
		*(dest + len) = *(src + len);
		len++;
	}

	*(dest + len) = '\0';
	return (dest);
}
