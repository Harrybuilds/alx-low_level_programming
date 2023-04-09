#include <stdio.h>

/**
 *main - start of program
 *@argc:command line argument counter
 *@argv:command line argument strings stored in array
 *Return: returns 0 if program execution successful
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
