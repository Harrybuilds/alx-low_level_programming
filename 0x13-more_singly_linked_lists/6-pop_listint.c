#include "lists.h"

/**
 * pop_listint - function to deletes the head node of a linked list
 * @head: pointer to the first element in the linked list
 *
 * Return: returns the data inside the elements that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temporal;
	int number;

	if (head || *head)
	{

		number = (*head)->n;

		temporal = (*head)->next;

		free(*head);

		*head = temporal;

		return (number);
	}
	else
		return (0);

}
