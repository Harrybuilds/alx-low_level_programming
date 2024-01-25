#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>


/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * 
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;


/* Macro to create a new node */
#define CREATE_NODE(data)(
{
	dlistint_t* newNode = malloc(sizeof(dlistint_t));
	if (newNode != NULL)
	{
		newNode->data = (data);
		newNode->next = NULL;
		newNode->prev = NULL;
	}                
	newNode;
})


size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);
dlistint_t *add_dnodeint(dlistint_t **head, const int n);

#endif /* DOUBLY_LINKED_LIST_H */
