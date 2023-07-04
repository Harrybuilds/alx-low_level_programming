#include "lists.h"

/**
 *add_node_end - function to add a node to the end of the list
 *@head: node add to start trasversing from
 *@str: string to be stored in the data part of the node
 *
 * Return: address of this new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *current = *head;

	/* requesting for space for the new node*/
	new_node = malloc(sizeof(list_t));

	/*verify if space requested for node was successful*/
	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}

	/*embedding the new node properties*/
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;

	/*add the node to the list by tranversing through the list*/
	/*until NULL is met, then point that NULL node to this new node*/

	if (!*head)
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
