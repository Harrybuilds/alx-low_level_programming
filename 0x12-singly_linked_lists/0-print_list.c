#include "lists.h"

/**
 *print_list - function to print all str in a singly linked list
 *@h: node pointer where the printing starts from
 *
 *Return: number of nodes counted in the singly linked list
 */

size_t print_list(const list_t *h)
{
	size_t rv = 0;
	const list_t *new_node;

	new_node = h;

	while (new_node)
	{
		if (new_node->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
			rv++;
		}
		else
		{
			printf("[%d] %s\n", new_node->len, new_node->str);
			rv++;
		}
	new_node = new_node->next;
	}

	return (rv);
}
