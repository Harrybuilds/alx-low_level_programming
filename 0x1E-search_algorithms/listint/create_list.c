#include <stdlib.h>
#include "listint.h"

/**
 * create_list - Creates a singly linked list from an array of integers
 * @array: Array of integers
 * @size: Size of the array
 *
 * Return: Pointer to the head of the newly created list
 */
listint_t *create_list(int *array, size_t size)
{
	listint_t *head = NULL, *new_node = NULL, *temp = NULL;
	size_t i;

	for (i = 0; i < size; i++)
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
		{
			free_list(head);
			return (NULL);
		}
		new_node->n = array[i];
		new_node->index = i;
		new_node->next = NULL;

		if (head == NULL)
		{
			head = new_node;
		}
		else
		{
			temp->next = new_node;
		}
		temp = new_node;
	}
	return (head);
}
