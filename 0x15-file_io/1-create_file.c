#include "main.h"

/**
 * create_file - function to creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: -1 if the function fails otherwise 1.
 */
int create_file(const char *filename, char *text_content)
{
	int filed, wri, len = 0;

	if (filename == NULL)
		return (-1);

	else
	{
		len = 0;
		while (text_content[len])
			len++;
	}
	filed = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	wri = write(filed, text_content, len);

	if (filed == -1 || wri == -1)
		return (-1);

	close(filed);


	return (1);
}



