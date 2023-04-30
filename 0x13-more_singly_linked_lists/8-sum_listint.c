#include "lists.h"

/**
 *sum_listint - function to calculates the
 *sum of all the data in a listint_t list
 *
 *@head: first node in the linked list
 *
 * Return: returns sum of all data in the linked list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;

		temp = temp->next;
	}
	return (sum);

}
