#include "lists.h"

/**
 * free_listint - function to free a linked list
 * @head: listint_t list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *temporal;

	for (; head; )
        {
		temporal = head->next;

		free(head);

		head = temporal;
	}

}
