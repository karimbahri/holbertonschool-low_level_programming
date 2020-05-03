#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at index
 * @h: header of the list
 * @idx: index
 * @n: value of the node
 * Return: head of the list
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node, *pos_list;
	unsigned int i = 0;

	if (!h)
		return (NULL);

	pos_list = *h;

	if (!idx)
	{
		node = add_dnodeint(h, n);
		return (node);
	}

	node = malloc(sizeof(dlistint_t));

	if (!node)
		return (NULL);

	node->n = n;

	while (pos_list)
	{
		if (i == idx)
		{
			pos_list->prev->next = node;
			node->prev = pos_list->prev;
			node->next = pos_list;
			pos_list->prev = node;
			return (node);
		}
		i++;
		pos_list = pos_list->next;
	}
	if (i == idx)
	{
		node = add_dnodeint_end(h, n);
		return (node);
	}
	return (NULL);
}
