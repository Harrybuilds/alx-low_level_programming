
#include "lists.h"

/**
 * get_dnodeint_at_index - function to node at a specified index in list
 * @head: start point of list
 * @index: index in the list whose node is to be returned
 * Return: node at a specified index or NULL if node does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int ind = 0;

	if (head != NULL)
	{
		while (head != NULL)
		{
			if (ind == index)
			{
				return (head);
			}
			head = head->next;
			ind++;
		}
	}
	return (NULL);
}
