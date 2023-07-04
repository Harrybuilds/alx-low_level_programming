#include "lists.h"

/**
 *add_node - function to add a node at the start of the list
 *@head: address of the pointer ponting to the first node
 *@str: the data stored in the str element of the list_t node
 *
 * Return: address to the new node if successful else NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t **new;

	new = (list_t *) malloc(sizeof(list_t));

	if (!new)
		return (NULL);

	new -> str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	(*head) -> new;

	return (new);
}
