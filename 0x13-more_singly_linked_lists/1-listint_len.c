#include "lists.h"

/**
 *listint_len - function that counts the number of nodes in a singly linled list
 *@h: pointer to start point from where the counting starts
 *
 *Return: number of nodes in the list
 */

size_t listint_len(const listint_t *h)
{
	size_t rv = 0;

	if (h)
	{
		while (h)
		{
			rv++;
			h = h->next;
		}
	}
	return (rv);
}
