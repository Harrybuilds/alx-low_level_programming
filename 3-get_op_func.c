#include "3-calc.h"


/**
 *get_op_func - function that selects the corresponding function
 *@s: operator passed as argument
 *Return: returns a pointer to the function thats corresponds to
 *the operator given as a parameter if operator is valid else Null
 */

int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod}
	};
	int i;

	i = 0;
	while (i < 5)
	{
		if (strcmp(s, ops[i].op) == 0)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}

