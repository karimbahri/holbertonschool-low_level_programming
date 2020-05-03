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
	unsigned int i = 1;


	if (!idx)
	{
		node = add_dnodeint(h, n);
		return (node);
	}

	pos_list = (*h)->next;
	while (pos_list)
	{
		if (i == idx)
		{
			node = malloc(sizeof(dlistint_t));

			if (!node)
				return (NULL);

			node->n = n;
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
