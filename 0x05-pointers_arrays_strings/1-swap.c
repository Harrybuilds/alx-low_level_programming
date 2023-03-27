/**
 *swap_int- swap value of 2 numbers using their memory address
 *@a: vairable that holds first number to be swapped
 *@b: variable that holds second number to be swapped
 */

void swap_int(int *a, int *b)
{
	int p3;
	p3 = *a;
	*a = *b;
	*b = p3;
}
