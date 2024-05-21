#include <stdio.h>
#include "skiplist.h"

/**
 * print_skiplist - Prints the elements of a skip list
 * @list: Pointer to the head of the skip list
 */
void print_skiplist(const skiplist_t *list)
{

	printf("List :\n");
	while (list != NULL)
	{
		printf("Index[%lu] = [%d]\n", list->index, list->n);
		list = list->next;
	}

	printf("\nExpress lane :\n");
	while (list != NULL)
	{
		if (list->express != NULL)
			printf("Index[%lu] = [%d]\n", list->index, list->n);
		list = list->express;
	}
}
