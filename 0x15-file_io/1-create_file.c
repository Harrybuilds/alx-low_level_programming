  #include "main.h"

/**
 *create_file - function to create a file
 *@filename: name of file to be created
 *@text_content: null terminated string to be written into the file
 *
 *Return: returns 1 on success else -1
 */

int create_file(const char *filename, char *text_content)
{
	size_t strlength, n;
	char *str;
	FILE *file;

	if (filename == NULL)
		return (-1);

	file = fopen(filename, "w");
	if (file == NULL)
		return (-1);

	str = text_content;
	if (str != NULL)
	{
		strlength = strlen(str);
		n = dprintf(fileno(file), "%s", str);
		if (n != strlength)
		{
			fclose(file);
			return (-1);
		}
		fclose(file);
	}

	return (1);
}
