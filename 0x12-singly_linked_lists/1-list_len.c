#include "lists.h"

/**
 *list_len - function to return number of elements in a list
 *@h: node to start counting from
 *
 *Return: number of elements in a linked list
 */

size_t list_len(const list_t *h)
{
	size_t rv = 0;
	const list_t *new_node;

	new_node = h;

	while (new_node)
	{
		rv++;
		new_node = new_node->next;
	}

	return (rv);
}
