#include "main.h"

/**
 *append_text_to_file - function to append text to file
 *
 *@filename: nameof file to append the text into
 *@text_content: text to be appended into t
 *Return: returns 1 if success else -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	char *str;
	FILE *file = fopen(filename, "a");

	if (file == NULL || filename == NULL)
		return (-1);

	str = text_content;
	chmod(filename, 0664);

	dprintf(fileno(file), "%s", str);

	fclose(file);
	return (1);
}
