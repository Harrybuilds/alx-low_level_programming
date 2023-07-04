#include "lists.h"

/**
 *execute_before_main - function to be executed befor main function
 *
 *Return: no expected return value
 */

void __attribute__((constructor)) execute_before_main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
