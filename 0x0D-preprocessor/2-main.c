#include <stdio.h>

/**
 * main - program to print name of file used to compile a program
 * @void: no argument expected
 * Return: returns 0
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
