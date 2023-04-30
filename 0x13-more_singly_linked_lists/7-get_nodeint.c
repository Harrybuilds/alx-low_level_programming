#include "lists.h"

/**
 * get_nodeint_at_index - function to return the node at a certain index in a
 * linked list
 * @head: first node in the linked list
 * @index: index of the node to return
 *
 * Return: pointer to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *temporal = head;

	for (i = 0; temporal && i < index; i++)
	{
		temporal = temporal->next;
	}
	return (temporal ? temporal : NULL);

}
