#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - insert node at given index
 * @head: head of the list
 * @idx: index
 * @n: value of the inserted node
 * Return: inserted node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node = *head, *ins_node, *next;
	unsigned int pos = 0;

	if (!head)
		return (NULL);

	ins_node = malloc(sizeof(listint_t));

	if (!ins_node)
		return (NULL);

	ins_node->n = n;

	if (!idx)
	{
		next = *head;
		*head = ins_node;
		(*head)->next = next;
		return (ins_node);
	}

	while (node)
	{
		if (pos == idx - 1)
		{
			next = node->next;
			node->next = ins_node;
			ins_node->next = next;

			return (ins_node);
		}
		node = node->next;
		pos++;
	}
	return (NULL);
}
