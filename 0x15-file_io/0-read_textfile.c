#include "main.h"

/**
 * read_textfile -function to read text file print to STDOUT.
 * @filename: the text file to be read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and
 *printed 0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *t_buf;
	ssize_t filed, wri, twi;

	filed = open(filename, O_RDONLY);

	if (filed == -1)
		return (0);

	t_buf = malloc(sizeof(char) * letters);

	twi = read(filed, t_buf, letters);

	wri = write(STDOUT_FILENO, t_buf, twi);

	free(t_buf);

	close(filed);

	return (wri);
}
