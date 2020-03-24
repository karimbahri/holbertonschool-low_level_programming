#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at index
 * @head: head of the list
 * @index: index of the node
 * Return: 1 if true -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int pos = 0;
	listint_t *node = *head, *next;

	if (!*head || !head)
		return (-1);

	if (!index)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}

	while (node)
	{
		if (pos == index - 1)
		{
			if (!node->next)
				return (-1);

			next = node->next->next;
			free(node->next);
			node->next = next;
			return (1);
		}
		pos++;
		node = node->next;
	}
	return (-1);
}
