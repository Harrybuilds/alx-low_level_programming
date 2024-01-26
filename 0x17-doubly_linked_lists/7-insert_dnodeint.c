#include "lists.h"

/**
 * CreateNode - function to create a new doubly linked list  node
 * @data: data to be inserted into the node
 * Return: address of new node if succesful else NULL
 */

dlistint_t *CreateNode(int data)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	if (newNode != NULL)
	{
		newNode->n = (data);
		newNode->next = NULL;
		newNode->prev = NULL;
	}
	return (newNode);
}


/**
 * insert_dnodeint_at_index - add node at a specified index in list
 * @h: head node of list
 * @ind: position in list node is tobe inserted into
 * @n: data to be insertedinto the node
 * Return: address of node inserted in the list
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int ind = 0;
	dlistint_t *beforeTarget, *target;

	if (*h != NULL)
	{
		dlistint_t *newNode = CreateNode(n);

		if (newNode != NULL)
		{
			while (*h != NULL)
			{
				/* get node before target index and target index*/
				if (ind == idx-1)
				{
					beforeTarget = *h;
				}
				else if (ind == idx)
				{
					target = *h;
				}
				*h = (*h)->next;
				ind++;
			}

			if (idx == 0)
			{
				/*insert at the begining ofthe list*/
				newNode->next = *h;
				if (*h != NULL)
				{
					(*h)->next = newNode;
				}
				*h = newNode;
			}
			else if(ind == idx)
			{
				/* insert at the end of the list */
				beforeTarget->next = newNode;
				newNode->prev = beforeTarget;
			}
			else
			{
				/*insert at the middle of the list */
				beforeTarget->next = newNode;
				newNode->prev = beforeTarget;
				newNode->next = target;
				target->prev = newNode;
			}

		return (newNode);
		}
	}
	return (NULL);
}
