#include "main.h"

/**
 *read_textfile - function to print all text in a file to standard output
 *@filename: name of file to be open
 *@letters: number of letter it should read and print
 *
 *Return: total number of letters printed out
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t no_byteread, no_bytewritten;
	char *str;
	FILE *file = fopen(filename, "r");

	if (filename == NULL || file == NULL)
		return (0);

	str = malloc(sizeof(char) * (letters + 1));
	if (str == NULL)
		return (0);

	no_byteread = fread(str, sizeof(char), letters, file);

	if (no_byteread <= 0)
	{
		fclose(file);
		free(str);
		return (0);
	}

	no_bytewritten = write(STDOUT_FILENO, str, no_byteread);

	if (no_bytewritten <= 0 || no_bytewritten != no_byteread)
	{
		fclose(file);
		free(str);
		return (0);
	}

	fclose(file);
	free(str);

	return (no_byteread);
}
