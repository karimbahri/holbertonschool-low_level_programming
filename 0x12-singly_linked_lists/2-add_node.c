#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - add node at the beginning of the list
 * @head: the head of the linked list
 * @str: the containing of the node
 * Return: The address of the new element added
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;

	node = malloc(sizeof(list_t));
		if (!node || !str)
			return (NULL);

		node->str = strdup(str);
		if (!node->str)
			return (NULL);

	node->len = _strlen(str);

	node->next = *head;
	*head = node;

	return (node);
}

/**
 * _strlen - return the length of a string
 * @s: the string to check
 * Return: lenght
 */
int _strlen(const char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	return (length);
}

