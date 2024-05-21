#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted list of integers
 * using Jump search
 * @list: Pointer to the head of the list
 * @size: Number of nodes in the list
 * @value: Value to search for
 *
 * Return: Pointer to the first node where value is located,
 * or NULL if not found
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump_step, i;
	listint_t *p, *cur;

	if (list == NULL || size == 0)
		return (NULL);

	jump_step = sqrt(size);
	p = list;
	cur = list;

	while (cur->next != NULL && cur->n < value)
	{
		p = cur;
		for (i = 0; i < jump_step; i++)
		{
			if (cur->next == NULL)
				break;
			cur = cur->next;
		}
		printf("Value checked at index [%lu] = [%d]\n", cur->index, cur->n);
	}

	printf("Value found between indexes [%lu] and [%lu]\n", p->index, cur->index);

	while (p != NULL && p->index <= cur->index)
	{
		printf("Value checked at index [%lu] = [%d]\n", p->index, p->n);
		if (p->n == value)
			return (p);
		p = p->next;
	}

	return (NULL);
}
