#include <stdio.h>

/**
 * main - program to print out number of argument passed to it
 * @argc: arguments counter
 * @argv:  arguments vector
 * Return: returns 0 on success
 */

int main(int argc, __attribute__((unused))char **argv)
{
	printf("%d\n", argc - 1);
	return (0);
}
