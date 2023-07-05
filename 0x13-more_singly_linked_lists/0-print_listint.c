#include "lists.h"

/**
 *print_listint - function to print all data of a linked list
 *@h: pointer to an address where the printing starts
 *
 *Return:number of nodes in a list
 *
 */

size_t print_listint(const listint_t *h)
{
	size_t rv = 0;

	if (h)
	{
		while (h)
		{
			printf("%d\n", h->n);
			rv++;
			h = h->next;
		}
	}
	return (rv);
}
