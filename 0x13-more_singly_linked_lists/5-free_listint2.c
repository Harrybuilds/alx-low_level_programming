#include "lists.h"

/**
 * free_listint - function to frees  linked list
 *@head: the pointer to the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *temporal;

	if (head == NULL)
		return;

	while (*head)
	{
		temporal = (*head)->next;

		free(*head);

		*head = temporal;
	}

	 *head = NULL;

}
