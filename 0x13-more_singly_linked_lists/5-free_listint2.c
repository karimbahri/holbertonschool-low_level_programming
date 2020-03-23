#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - free linked list
 * @head: head of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *next;

	if (head)
	{
		while (*head)
		{
			next = (*head)->next;

			free(*head);

			*head = next;
		}
		*head = NULL;
	}
}
