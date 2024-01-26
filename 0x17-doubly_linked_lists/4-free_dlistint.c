#include "lists.h"
/**
 * free_dlistint - function to free nodes in doubly linked list
 * @head: start point to start freeing nodes in the list
 * Return: nothing os returned
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
