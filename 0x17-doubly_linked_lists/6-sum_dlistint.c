#include "lists.h"
/**
 * sum_dlistint : function to get sum of nodes in the list
 * @head: start point of the list
 * Return: sum of all nodes in the list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head != NULL)
	{
		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
		return (sum);
	}
	return (sum);
}
