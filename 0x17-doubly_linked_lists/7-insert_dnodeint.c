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

	pos_list = *h;

	if (!idx)
	{
		node = add_dnodeint(h, n);
		return (node);
	}

	while (pos_list)
	{
		if (i == idx)
		{
			node = malloc(sizeof(dlistint_t));

			if (!node)
				return (NULL);

			node->prev = pos_list->prev;
			node->next = pos_list;
			pos_list->prev->next = node;
			pos_list->prev = node;
			node->n = n;
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
