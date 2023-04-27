#include "lists.h"

/**
 * free_list - function to free a linked list
 * @head: the list_t list to be freed
 */
void free_list(list_t *head)
{
	list_t *temporal;

	for (; head;)
	{
		temporal = head->next;
		free(head->str);
		free(head);
		head = temporal;
	}

}
