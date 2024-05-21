#include <stdlib.h>
#include "skiplist.h"

/**
 * create_skiplist - Creates a skip list from an array of integers
 * @array: Array of integers
 * @size: Size of the array
 *
 * Return: Pointer to the head of the newly created skip list
 */
skiplist_t *create_skiplist(int *array, size_t size)
{
	skiplist_t *head = NULL, *new_node = NULL, *temp = NULL;
	size_t i, step, express_count;

	step = sqrt(size);
	express_count = 0;

	for (i = 0; i < size; i++)
	{
		new_node = malloc(sizeof(skiplist_t));
		if (new_node == NULL)
		{
			free_skiplist(head);
			return (NULL);
		}
		new_node->n = array[i];
		new_node->index = i;
		new_node->next = NULL;
		new_node->express = NULL;

		if (head == NULL)
		{
			head = new_node;
		}
		else
		{
			temp->next = new_node;
		}

		if (i % step == 0)
		{
			if (express_count > 0)
				temp->express = new_node;
			express_count++;
		}
        
		temp = new_node;
	}

	return (head);
}
