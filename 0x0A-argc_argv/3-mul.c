#include <stdio.h>
#include <stdlib.h>

/**
 * main - program to multiply 2 numbers and prints it result
 * @argc: arguments counter
 * @argv: arguments vector
 * Return: an integer representing success or failure
 */

int main(int argc, char **argv)
{
	int res;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	res = atoi(argv[1]) * atoi(argv[2]);

	printf("%d\n", res);

	return (0);
}

