#include "lists.h"

/**
 * print_dlistint - function to print elements in the doubly linked list
 * @h: head of the doubly linked list
 * Return: integer represent number of nodes in the doubly linked list
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t rv = 0;
	const dlistint_t *temp = h;

	while (temp != NULL)
	{
		/* Process or print data */
		rv += 1;
		printf("%d\n", temp->n);
		temp = temp->next;
	}

	return (rv);
}
