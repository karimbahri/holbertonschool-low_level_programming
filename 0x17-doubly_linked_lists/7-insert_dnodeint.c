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
	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);

	node->n = n;
	if (!idx)
	{
		if (*h)
			(*h)->prev = node;

		node->next = *h;
		node->prev = NULL;
		*h = node;
		return (node);
	}
	else
	{
		while (pos_list)
		{
			if (i == idx - 1)
			{
				node->next = pos_list->next;
				pos_list->next = node;
				node->prev = pos_list;
				break;
			}
			i++;
			pos_list = pos_list->next;
		}
		return (node);
	}
	return (NULL);
}
