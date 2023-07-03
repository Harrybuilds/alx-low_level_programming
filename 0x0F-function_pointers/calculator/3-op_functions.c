#include "3-calc.h"

/**
 *op_add - function to add 2 numbers
 *@a: first operand
 *@b: second operand
 *Return: returns sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);

}

/**
 *op_sub - function to return the difference of 2 numbers
 *@a: first operand
 *@b: second operand
 *Return: returns the differences of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - function to multiply 2 numbers
 *@a: first operand
 *@b: second operand
 *Return: returns the product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_div - function to return the result of the division of a by b
 *@a: first operand
 *@b: second operand
 *Return: returns the result of dividing a by b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 *op_mod - function to get the remainder of dividing a by b
 *@a: first operand
 *@b: second operand
 *Return: returns the remainder of the division of a by b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
