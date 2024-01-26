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
 *add_dnodeint_end - function to add node at end of doubly linked list
 * @head: start point of list
 * @n: data to be inserted into the new node
 * Return: address of new nodeif sucessful else NULL
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode = CreateNode(n);

	if (newNode == NULL)
	{
		return (NULL);
	}

	/*update the newNode after verify weather list is empty*/
	if (*head == NULL)
	{
		*head = newNode;
	}
	else
	{
		dlistint_t *temp = *head;

		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newNode;
		newNode->prev = temp;
	}
	return (newNode);
}
