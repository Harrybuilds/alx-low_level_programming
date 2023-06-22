#include "3-calc.h"
#include "3-op_functions.c"

/**
 *get_op_func - function that selects the correct function to perfrom the selected operation 
 *@s: operator passed as argument
 *@a: first operand
 *@b: second operand
 *Return: returnsa pointer to the function thats corresponds to 
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
    while ( i < 5)
    {
        if (s == ops[i]->op)
        {
            return (ops[i]->f);
        }
        i++;
    }
    
    return (NULL)
}

