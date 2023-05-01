#include "lists.h"

/**
 * insert_nodeint_at_index - function to inserts a new node in a linked list,
 * at a particular given position

 * @head: pointer to the first node in the list
 * @idx: the index where the new node is added
 * @n: the data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j;

	listint_t *new_holder;

	listint_t *temporal = *head;

	new_holder = malloc(sizeof(listint_t));

	if (!new_holder || !head)
	{
		new_holder->n = n;

		new_holder->next = NULL;
	}
	else
		return (NULL);

	if (idx == 0)
	{
		new_holder->next = *head;

		*head = new_holder;

		return (new_holder);
	}

	for (j = 0; temporal && j < idx; j++)
	{
		if (j == idx - 1)
		{
			new_holder->next = temporal->next;

			temporal->next = new_holder;

			return (new_holder);
		}
		else
			temporal = temporal->next;
	}

	return (NULL);

}
