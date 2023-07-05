#include "lists.h"


/**
 *free_listint2 - frees all nodes in the list and set the head pointer to NULL
 *@head: address of the pointer to where the freeing starts
 *
 *Return: no expected return value
 */

void free_listint2(listint_t **head)
{
	listint_t *next_node, *current = *head;

	if (current)
	{
		while (current)
		{
			next_node = current->next;
			free(current);
			current = next_node;
		}
		*head = NULL;
	}

}
