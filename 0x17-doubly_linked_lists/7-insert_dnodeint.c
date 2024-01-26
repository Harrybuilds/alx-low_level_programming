#include "lists.h"

/* Function to create a new node*/
dlistint_t *CreateNode(int data) {
    dlistint_t *newNode = malloc(sizeof(dlistint_t));
    if (newNode != NULL) {
        newNode->n = data;
        newNode->prev = NULL;
        newNode->next = NULL;
    }
    return newNode;
}

/**
 * insert_dnodeint_at_index - Insert a new node at a given position in a doubly linked list
 * @h: Pointer to the head node of the list
 * @idx: Index where the new node should be added
 * @n: Data to be inserted into the new node
 * Return: Address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int ind = 0;
	dlistint_t *newNode = CreateNode(n);
	dlistint_t *current = *h;


	if (h == NULL)
	{
		return (NULL);
	}

	if (newNode == NULL)
	{
		return (NULL); /* Memory allocation failed */
	}

	if (idx == 0)
	{
		/* Inserting at the beginning of the list*/
		newNode->next = *h;
		if (*h != NULL)
		{
			(*h)->prev = newNode;
		}
		*h = newNode;
	}
	else
	{
		/* Inserting at a position other than the beginning*/

		while (current != NULL && ind < idx - 1)
		{
			current = current->next;
			ind++;
		}

		if (current == NULL || ind < idx - 1)
		{
			/* Index out of bounds */
			free(newNode);
			return (NULL);
		}

		newNode->next = current->next;
		newNode->prev = current;
		if (current->next != NULL)
		{
			current->next->prev = newNode;
		}
		current->next = newNode;
	}

	return (newNode);
}

