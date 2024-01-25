#include "lists.h"

/**
 *dlistint_len - function to count and return number of node in list
 * @h: head of the doubly linked list
 * Return: an integer represent no of nodes in the linked list
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t rv = 0;
	const dlistint_t *temp = h;

	while (temp != NULL)
	{
		rv += 1;
		temp = temp->next;
	}
	return (rv);
}
