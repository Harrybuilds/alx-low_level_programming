#include "lists.h"


/**
 *free_listint - function to free members of listint list
 *@head: pointer to address to start free from
 *
 *Return: no return value expected
 */

void free_listint(listint_t *head)
{
	listint_t *next_node;

	if (head)
	{
		while(head)
		{
			next_node = head->next;
			free(head);
			head = next_node;
		}
	}
}
