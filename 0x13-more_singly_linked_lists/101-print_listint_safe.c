#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - print linked list
 * @head: head of the list
 * Return: size of the list
 */
size_t print_listint_safe(const listint_t *head)
{

	size_t size = 0;
	const listint_t *node = head;

	if (!node)
		exit(98);

	while (node)
	{

		printf("%d\n", node->n);
		node = node->next;
		size++;
	}

	return (size);
}
