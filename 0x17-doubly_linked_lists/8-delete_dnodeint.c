#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - delete at index
 * @head: head of the list
 * @index: index
 * Return: 1 if it works -1 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node = NULL, *tmp;
	unsigned int i = 0;

	if (!head || !*head)
		return (-1);

	if (!index)
	{
		if ((*head)->next)
		{
			*head = (*head)->next;
			free((*head)->prev);
			(*head)->prev = NULL;
			return (1);
		}
		free(*head);
		*head = NULL;
	}

	node = *head;

	while (node)
	{
		if (i == index)
		{
			tmp = node->next;
			node = node->prev;
			free(node->next);
			node->next = tmp;
			tmp->prev = node;
			return (1);
		}
		node = node->next;
		i++;
	}
	return (-1);

}
