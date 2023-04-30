#include "lists.h"


/**
 * print_listint - function to prints all the elements of a linked list
 * @h: linked list of type listint_t to print
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t num_of_nodes = 0;

	for (; h; )
	{
		printf("%d\n", h->n);
		num_of_nodes++;

		h = h->next;
	}

	return (num_of_nodes);

}
