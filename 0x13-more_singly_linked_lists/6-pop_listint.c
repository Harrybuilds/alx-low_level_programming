#include "lists.h"

/**
 *pop_listint - function to pop out data of first node in a list
 *@head: address of pointer to the head node in the list
 *
 *
 *Return: returns first node data if successful else 0
 */

int pop_listint(listint_t **head)
{
	listint_t *node;
	int data;

	if (!*head)
	{
		return (0);
	}

	node = *head;
	*head = (*head)->next;
	data = node->n;
	free(node);

	return (data);
}
