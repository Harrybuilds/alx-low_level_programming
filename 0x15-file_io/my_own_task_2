#include "main.h"

/**
 *append_text_to_file - function to append text to file
 *
 *@filename: name of file to append the text into
 *@text_content: null terminated string to be appended into the file
 *Return: returns 1 if success else -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	char *str;
	FILE *file = fopen(filename, "r");

	if (file == NULL || filename == NULL)
		return (-1);

	if (text_content)
	{
		file = fopen(filename, "a");
		str = text_content;
		chmod(filename, 0664);

		dprintf(fileno(file), "%s", str);

		fclose(file);
		return (1);
	}
	else
	{
		if (filename)
			return (1);
		else
			return (-1);
	}
}
