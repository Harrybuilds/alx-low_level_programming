#include <stdio.h>
#include <stdlib.h>

/**
 *main - starts of program execution
 *@argc: command line argument counter
 *@argv: command line arguments strings stored in array
 *Return: The return value
 */

int main(int argc, char *argv[])
{
	if  (argc > 2)
	{
		int a = atoi(argv[1]);
		int b = atoi(argv[2]);
		int sum = a * b;

		printf("%d\n", sum);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
