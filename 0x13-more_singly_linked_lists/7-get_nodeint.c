#include "lists.h"


/**
 *get_nodeint_at_index - function to get a node at a given index
 *@head: supposed pointer to the head node
 *@index: node at index to be gotten
 *
 *Return: node at the given index if successful else NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;


	while (head)
	{
		if (n == index)
		{
			return (head);
		}
		n++;
		head = head->next;
	}

	return (NULL);


}
