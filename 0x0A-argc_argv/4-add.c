#include <stdio.h>
#include "main.h"

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

		while (x < _strlen(argv[i]))
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
		if (_atoi(argv[i])  >= 0)
			sum += _atoi(argv[i]);
		i++;
	} 

	printf("%d\n", sum);

	return (0);
}




int _atoi(char *s)
{
	int i, d, n, len, f, digit;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && f == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (n);
}


int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
