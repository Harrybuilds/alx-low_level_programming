#include "3-calc.h"

/**
 *main - simple calculator
 *@argc: argument count
 *@argv: argument vector
 *Return: result of calculation if valid operation is passed else error
*/

int main(int argc, char *argv[])
{
	int a, b, (*fun_ptr)(int x, int y), result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2] == "/" && b == 0 || argv[2] == "%" && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);


	fun_ptr = get_op_func(argv[2]);

	if (fun_ptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", fun_ptr(a, b));

	return (0);
}
