#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - reverse linked list
 * @head: head of the list
 * Return: tail of the list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *node = NULL, *next = NULL;

	if (!head)
		return (NULL);

	while (*head)
	{
		node = (*head)->next;
		(*head)->next = next;
		next = *head;
		*head = node;
	}
	*head = next;

	return (*head);
}

