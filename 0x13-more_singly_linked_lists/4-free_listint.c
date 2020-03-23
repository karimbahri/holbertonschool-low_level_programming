#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - free linked list
 * @head: head of the list
 */
void free_listint(listint_t *head)
{
	listint_t *node = head, *next;

	while (node)
	{
		next = node->next;
		free(node);
		node = next;
	}
}
