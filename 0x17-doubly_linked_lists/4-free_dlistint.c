#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - free linked list
 * @head: head of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	while (head)
	{
		node = head->next;
		free(head);
		head = node;
	}
}
