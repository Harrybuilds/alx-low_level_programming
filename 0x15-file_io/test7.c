#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

/*int set_permission(const char *file)*/
int my_openr(const char *pathname, int flags);
int my_openw(const char *pathname, int flags);

#define BUFFER_SIZE 1024


/**
 *main -program to copy content of a file into file
 *@argc: argument counter
 *@argv: argument vector
 *
 *Return: integer representing status of program
 */

int main(int argc, char *argv[])
{
	const char *file_from;
	const char *file_to;
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;
	int fd_from, fd_to, file_exist;
	
	/* Check the number of arguments*/
	if (argc != 3)
	{

		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}

	file_from = argv[1];
	file_to = argv[2];

	/*Open the source file for reading*/

	fd_from = my_openr(file_from, O_RDONLY);

	file_exist = access(file_to,F_OK);

	
	if (file_exist != 0)
	{
	/*open file to write into*/
		fd_to = my_openw(file_to, O_WRONLY | O_CREAT | O_TRUNC);
		chmod(file_to, 0664);
	}
	else
		fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC);

	
	/* Copy the content from source to destination*/

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			return (99);
		}

		if (bytes_written < bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: Incomplete write to %s\n", file_to);
			return (99);
		}
	}

	/* Check for errors in reading from the source file*/

	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		return (98);
	}

	/* Close the file descriptors*/

	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		return (100);
	}

	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		return (100);
	}

	return (0);
}


/**
 *my_openr - function to open a file for reading
 *@pathname: path or name of file to be opened for reading
 *@flags: flags(mode) in which the file is opened with
 *
 *Return: returns an integer value that represent the status of the function
 */

int my_openr(const char *pathname, int flags)
{
	int fd_from;

/*Open the source file for reading*/

	fd_from = open(pathname, flags);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", pathname);
		return (98);
	}
	return (fd_from);
}




/**
 *my_openw - function to open a file for write
 *@pathname: path or name of file to be opened for writing
 *@flags: flags(mode) in which the file is opened with
 *
 *Return: returns an integer value that represent the status of the function
 */

int my_openw(const char *pathname, int flags)
{
	int fd_to;

	/* Open the destination file for writing*/
	fd_to = open(pathname, flags);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", pathname);
		return (99);
	}
	return (fd_to);
}



/**
 *set_permission - function to set file permission
 *@file: file whose permission is to be set
 *@permission: permission to grant to the file
 *
 *Return: no value returned
 *

int set_permission(const char *file)
{
	int rv;

	rv = access(file, F_OK);

	if (rv != 0)
	{
		chmod(file, 0664);
		return (-1);
	}
	return (0);
	}*/
