#include <stdio.h>

/**
 *main - starting point of program execution
 *@argc: command line argument counter
 *@argv: command line strings stored in array
 *Return: returns 0when program runs successful
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
