#include <stddef.h>

/**
 *print_name - a funtion that points to another function
 *@name: The name to be manipulated on by the other funtion
 *@f: The other function doing the manipulation
 *Return: returns nothing after function execution
 */

void print_name(char *name, void (*f)(char *))
{
	while (name == NULL || f == NULL)
		return;
	f(name);
}
