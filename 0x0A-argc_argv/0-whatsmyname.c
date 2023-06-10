#include <stdio.h>

/**
 * main - program to print name using to call the program
 * @argc: argument counter
 * @argv: arguments vector, 1d array of strings
 * Return: returns 0 on success
 */

int main(__attribute__((__unused__)) int argc, char **argv)
{
	puts( argv[0]);
	return (0);
}
