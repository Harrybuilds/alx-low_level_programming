#include "lists.h"
/**
 * add_nodeint_end - function to adds a node at the end of a linked list
 * @head: pointer to the first element inside the list
 * @n: data to be inserted in the end of the linked list
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_space;
	listint_t *temporal = *head;

	new_space = malloc(sizeof(listint_t));

	if (!new_space)
		return (NULL);

	new_space->n = n;

	new_space->next = NULL;

	if (*head == NULL)
	{
		*head = new_space;

		return (new_space);
	}
	while (temporal->next)
		temporal = temporal->next;

	temporal->next = new_space;

	return (new_space);

}
