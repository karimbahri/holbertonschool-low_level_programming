#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_list - free linked list
 * @head: head of the linked list
 */
void free_list(list_t *head)
{
	list_t *node = head, *next;

	while (node)
	{
		next = node->next;
		free(node->str);
		free(node);
		node = next;
	}
}
