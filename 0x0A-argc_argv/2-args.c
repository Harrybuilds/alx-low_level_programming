#include <stdio.h>

/**
 *main - program execution function
 *@argc: command line argument counter
 *@argv: command line string stored in array
 *Return: return value after program execution
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	int i = 0;

	if (argc > 1)
	{
		while (i < argc)
		{
			printf("%s\n", argv[i]);
			i++;
		}
	}
	return (0);
}
