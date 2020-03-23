#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - print linked list
 * @h: head of the list
 * Return: size of the list
 */
size_t print_listint(const listint_t *h)
{
	size_t size = 0;
	const listint_t *node = h;
	while (node)
	{
		printf("%d\n", node->n);
		node = node->next;
		size++;
	}

	return (size);
}
