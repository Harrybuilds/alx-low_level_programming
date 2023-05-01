#include "lists.h"

/**
 *delete_nodeint_at_index - function to deletes a node
 *in a linked list at a certain index
 *
 * @head: pointer to the first element in the list
 * @index: the index of the node to be deleted
 *
 * Return: 1 (Success), or -1 (Fail)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temporal = *head;
	listint_t *current = NULL;
	unsigned int j = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;

		free(temporal);

		return (1);
	}

	for (; j < index - 1; j++)
	{
		if (!temporal || !(temporal->next))
			return (-1);

		temporal = temporal->next;
	}
	current = temporal->next;

	temporal->next = current->next;

	free(current);


	return (1);

}
