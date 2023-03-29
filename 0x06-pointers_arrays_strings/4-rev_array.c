#include "main.h"

/**
 *reverse_array - func. to reverse the contents in an array
 *@a: pointer to the array
 *@n: no of elements in the array
 */

void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		n--;

		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
