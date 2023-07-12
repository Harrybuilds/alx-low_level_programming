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
	char *str;
	FILE *file;

	if (filename == NULL)
		return (-1);

	file = fopen(filename, "r");
	if (file == NULL)
		return (-1);

	str = text_content;
	if (str == NULL)
	{
		file = fopen(filename, "w");
		fclose(file);
	}
	else
	{
		file = fopen(filename, "w");
		dprintf(fileno(file), "%s", str);
		fclose(file);
	}


	return (1);
}
