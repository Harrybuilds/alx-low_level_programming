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
	mode_t mode;
	size_t len, n;
	int r;
	char *str;
	FILE *file;

	file = fopen(filename, "w");
	if (filename == NULL || file == NULL)
		return (-1);

	str = text_content;
	if (str != NULL)
	{
		len = strlen(str);
		n = dprintf(fileno(file), "%s", str);
		if (n != len)
		{
			fclose(file);
			return (-1);
		}
	}
	/*setting file permission for file owner*/
	mode = S_IRUSR | S_IWUSR;
	r = chmod(filename, mode);
	if (r != 0)
		return (-1);

	return (1);
}
