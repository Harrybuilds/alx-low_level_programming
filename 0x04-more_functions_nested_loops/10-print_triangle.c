#include "main.h"

/**
*print_triangle - program to prints a triangle
*@size: the input to be gotten to print the triangle
*
*
* void print_triangle(int size)
*{
*	int i, j;
*
*	if (size > 0)
*		for (i = 0; i < size; i++)
*		{
*			for (j = 0; j <= i; j++)
*			{
*				_p utchar('#');
*			}
*			_putchar('\n');
*		}
*	else
*	{
*		_putchar('\n');
*	}
*}
*/

void print_triangle(int size)
{
	int r, s, h;

	if (size > 0)
	{
		for (r = 1; r <= size; r++)
		{
			for (s = size - r; s >= 1; s--)
			{
				_putchar(' ');
			}
			for (h = 1; h <= r; h++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}

}
