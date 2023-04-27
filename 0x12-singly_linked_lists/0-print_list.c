#include <stdio.h>
#include "lists.h"

/**
 * print_list - function to prints all the elements of a linked list
 * @h:the pointer to the list_t list to be printed
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t sta = 0;

	for (; h; sta++)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
	}

	return (sta);
}
