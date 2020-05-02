#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - add node in the beginning of the list
 * @head: head of the list
 * @n: value of the node
 * Return: the new head
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{

	dlistint_t *node = NULL;

	node = malloc(sizeof(dlistint_t));

	if (!node)
		return (NULL);

	node->n = n;
	node->prev = NULL;
	node->next = *head;
	*head = node;

	return (node);
}
