#include "main.h"

/**
 * append_text_to_file - function to appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to be appended to the end of the file.
 *
 * Return: -1 If the function fails or filename is NULL
 *orif file does not exist the user lacks write permissions otherwise 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o_var, w_var, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}
	o_var = open(filename, O_WRONLY | O_APPEND);

	w_var = write(o_var, text_content, length);

	if (o_var == -1 || w_var == -1)
		return (-1);

	close(o_vars);

	return (1);
}
