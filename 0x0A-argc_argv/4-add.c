#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * main - program to add numbers
 * @argc: arguments counter
 * @argv: arguments vector
 * Return: returns an integer represent success or failure
 */

int main(int argc, char *argv[])
{
	int i = 1, sum = 0;

	if (argc == 1)
	{
		puts("0");
		return (0);
	}

	while (i < argc)
	{
		int x = 0;

		while (x < strlen(argv[i]))
		{
			if (argv[i][x] >= 48 && argv[i][x] <= 57)
				x++;
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		i++;
	}

	i = 1;

	while (i < argc)
	{
		sum += atoi(argv[i]);
		i++;
	}

	printf("%d\n", sum);

	return (0);
}

