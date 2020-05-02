#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - add node at the end of linked list
 * @head: head of the list
 * @n: value of the node
 * Return: head of the list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node = NULL, *posList = *head;

	node = malloc(sizeof(dlistint_t));

	if (!node)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (!posList)
	{
		posList = node;
		posList->prev = NULL;
		*head = posList;
	}
	else
	{
	while (posList)
	{
		if (!posList->next)
		{
			posList->next = node;
			node->prev = posList;
			break;
		}
		posList = posList->next;
	}

	}
	return (*head);
}
