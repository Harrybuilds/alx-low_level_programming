#include <stdio.h>

/**
 * main - funtion to print all commandline argument passed to it
 * @argc: arguments counter
 * @argv: 1d array that holds strings as arguments
 * Return: returns 0 on success
 */

int main(int argc, char **argv)
{
	int i = 0;

	while (argc--)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}

