#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - add node at the beginning of the list
 * @head: head of the list
 * @n: assigned value
 * Return: head of the list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));

	if (!node)
		return (NULL);

	node->n = n;
	node->next = *head;
	*head = node;

	return (node);
}
