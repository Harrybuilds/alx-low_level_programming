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
	size_t length, bytes_written;
	FILE *file;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	file = fopen(filename, "a");
	if (file == NULL)
		return (-1);

	length = strlen(text_content);
	bytes_written = fwrite(text_content, sizeof(char), length, file);
	fclose(file);

	return ((bytes_written == length) ? 1 : -1);
}
