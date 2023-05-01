#include "lists.h"

/**
 * reverse_listint - function to reverses a linked list
 * @head: the  pointer to the first node in the list
 *
 * Return: pointer to the first node in the new list
 */

listint_t *reverse_listint(listint_t **head)

{
	listint_t *previous_node = NULL;
	listint_t *next_node = NULL;

	for (; *head; )
	{
		next_node = (*head)->next;

		(*head)->next_node = previous_node;

		previous_node = *head;

		*head = next_node;
	}
	*head = previous_node;

	return (*head);

}
