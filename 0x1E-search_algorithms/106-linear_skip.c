#include "search_algos.h"

/**
 * linear_skip - Searches for a value in a sorted skip list of integers
 * @list: Pointer to the head of the skip list to search in
 * @value: Value to search for
 *
 * Return: Pointer to the first node where value is located, or NULL if not found
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *prev, *current;

	if (list == NULL)
		return (NULL);

	current = list;
	while (current->express != NULL)
	{
		printf("Value checked at index [%lu] = [%d]\n", current->express->index, current->express->n);
		if (current->express->n >= value)
			break;
		current = current->express;
	}

	prev = current;
	if (current->express != NULL)
	{
		printf("Value found between indexes [%lu] and [%lu]\n", prev->index, current->express->index);
		current = current->express;
	}
	else
	{
		while (current->next != NULL)
			current = current->next;
		printf("Value found between indexes [%lu] and [%lu]\n", prev->index, current->index);
	}

	current = prev;
	while (current != NULL && current->n <= value)
	{
		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
		if (current->n == value)
			return (current);
		current = current->next;
	}

	return (NULL);
}
