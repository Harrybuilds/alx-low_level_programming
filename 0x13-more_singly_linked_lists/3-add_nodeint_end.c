#include "lists.h"


/**
 *add_nodeint_end - function to add a node at the end of the list
 *@head: address of pointer from where the transversing should start from
 *@n: value to be assigned to the data of the new_node
 *
 *Return: address of the new node to be created if successful else NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current = *head;
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (!current)
	{
		*head = new_node;
		return (new_node);
	}
	else
	{
		while (current->next)
		{
			current = current->next;
		}
		current->next = new_node;
		return (new_node);
	}
}


/**
 * create_node - function to create a new node
 *
 * Return: addressof the new node created
 */

listint_t *create_node()
{
	listint_t *node = malloc(sizeof(listint_t));

	if (!node)
	{
		/*free allocations made before encountering NULL*/
		free(node);
		return (NULL);
	}

	return (node);
}

