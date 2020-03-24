#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - get the nth node of linked list
 * @head: head of the list
 * @index: given index
 * Return: the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int pos = 0;

	while (head)
	{
		if (pos == index)
			return (head);

		head = head->next;
		pos++;
	}
	return (NULL);
}
