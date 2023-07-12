#include "main.h"

/**
 *create_file - function to create a file
 *@filename: name of file to be created
 *@text_content: string to be inserted into the file
 *
 *Return: returns 1 on success else -1
 */

int create_file(const char *filename, char *text_content)
{
	char *str;
	FILE *file;

	file = fopen(filename, "w");
	if (filename == NULL || file == NULL)
		return (-1);

	str = text_content;
	dprintf(fileno(file), "%s", str);
	fclose(file);


	return (1);
}
