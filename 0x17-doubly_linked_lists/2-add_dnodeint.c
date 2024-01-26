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
 * add_dnodeint - function to add node at the begin of the node
 * @head: head of the node
 * @n : data of the new node to be added to the doubly linked list
 * Return: NULL if it failed else address of the new element
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = CreateNode(n);

	if (!newNode)
	{
		return (NULL);
	}

	/* update newNode pointers*/
	newNode->next = *head;
	newNode->prev = NULL;

	/* verify if list is empty then update accordingly*/
	if (*head != NULL)
	{
		(*head)->prev = newNode;
	}

	/*set head node to the newNode */
	*head = newNode;

	return (newNode);
}
