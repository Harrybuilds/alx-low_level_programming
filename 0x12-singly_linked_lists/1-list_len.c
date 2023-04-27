#include "lists.h"

/**
 * list_len - function to returns the number of elements in a linked list
 * @h: pointer to the list_t list
 *
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t number = 0;

	for (; h;)
	{
		number++;
		h = h->next;
	}
	return (number);
}
