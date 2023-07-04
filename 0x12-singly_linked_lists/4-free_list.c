#include "lists.h"

/**
 *free_list - function to free all nodes in a linked list
 *@head: pointer to where the freeing starts
 *
 *Return: no expected return
 */

void free_list(list_t *head)
{
	list_t *next_node;

	if (head)
	{
		if (head->next)
		{
			while (head)
			{
				next_node = head->next;
				free(head->str);
				free(head);
				head = next_node;
			}
		}
		else
		{
			free(head);
		}
	}


}
