#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - add node at the end of the list
 * @head: head of the list
 * @n: assigned value
 * Return: the head of the list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node = *head;
	listint_t *added_node;

	added_node = malloc(sizeof(listint_t));

	if (!added_node)
		return (NULL);

	added_node->n = n;
	added_node->next = NULL;

	if (!node)
	{
		*head = added_node;
		return (added_node);
	}

	while (node && node->next)
		node = node->next;

	node->next = added_node;

	return (added_node);
}
