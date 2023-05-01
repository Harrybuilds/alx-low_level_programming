#include "lists.h"

/**
 * loop_listint_len - function to count the number of unique nodes
 * in a looped listint_t linked list.
 *
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 * Otherwise - the number of unique nodes in the list.
 */
size_t loop_listint_len(const listint_t *head)
{
	const listint_t *ptr1, *ptr2;
	size_t nodes = 1;

	if (head->next == NULL || head == NULL)
		return (0);

	ptr1 = head->next;

	ptr2 = (head->next)->next;

	for (; ptr2; )
	{
		if (ptr1 == ptr2)
		{
			ptr1 = head;

			while (ptr1 != ptr2)
			{
				nodes++;

				ptr1 = ptr1->next;

				ptr2 = ptr2->next;
			}
			ptr1 = ptr1->next;
			for (; ptr1 != ptr2; )
			{
				nodes++;

				ptr1 = ptr1->next;
			}
			return (nodes);
		}
		ptr1 = ptr1->next;
		ptr2 = (ptr2->next)->next;
	}
	return (0);
}


/**
 * print_listint_safe - function to prints a listint_t list safely.
 * @head: pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, indx = 0;

	nodes = loop_listint_len(head);

	if (nodes == 0)
	{
		while (head != NULL)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			nodes++;
		}
	}

	else
	{
		while (indx < nodes)
		{
			printf("[%p] %d\n", (void *)head, head->n);

			head = head->next;

			indx++;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
