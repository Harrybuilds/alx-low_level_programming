#include "3-calc.h"
#include "3-op_functions.c"
#include "3-get_op_func.c"

/**
 *main - simple calculator
 *@argc: argument count
 *@argv: argument vector
 *Return: result of calculation if valid operation is passed else error
*/

int main(argc, argv)
{
    int a, b, (*fun_ptr)(int x, int y), result;

    if (argc != 4)
    {
        printf("Error\n");
        exit(98);
    }
    

    if (argv[2] == ops[3]->op && b == 0 || argv[2] == ops[4]->op && b == 0 )
    {
        printf("Error\n");
        exit(100);
    }

    a = atoi(argv[1]);
    b = atoi(argv[3]);

    fun_ptr = get_op_func(argv[2])(a,  b);

    if (fun_ptr == NULL)
    {
        printf("Error\n");
        exit(98);
    }

    result = fun_ptr(a,b);

    printf("%d\n", result);

    return (0);
}