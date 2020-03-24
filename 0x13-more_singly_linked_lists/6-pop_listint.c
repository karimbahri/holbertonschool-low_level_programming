#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - delete first node of list
 * @head: head of the list
 * Return: the value of removed node
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int n;

	if (!*head)
		return (0);

	node = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = node;

	return (n);
}
