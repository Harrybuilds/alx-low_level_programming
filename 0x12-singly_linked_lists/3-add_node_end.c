#include "lists.h"

/**
 * add_node_end - function to adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: the string to put into the new node
 *
 * Return: returns address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode;
	list_t *temporal = *head;
	unsigned int len = 0;

	for (; str[len];)
		len++;

	newnode = malloc(sizeof(list_t));

	if (!newnode)
		return (NULL);

	newnode->str = strdup(str);

	newnode->len = len;

	newnode->next = NULL;


	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}

	for (; temporal->next;)
		temporal = temporal->next;

	temporal->next = newnode;


	return (newnode);

}
