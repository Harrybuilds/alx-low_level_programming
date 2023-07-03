#include "function_pointers.h"

/**
 *print_name - a function taking a name and a function pointer as arguments
 *@name: name to be passed to the function pointer
 *@f: function pointer to be invoked
 *Return: no return value expected
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
