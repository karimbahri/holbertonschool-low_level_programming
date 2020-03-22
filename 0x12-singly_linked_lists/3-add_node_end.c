#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - add node at the end of the list
 * @head: head of the list
 * @str: conaining string
 * Return: address of the added node
 */
list_t *add_node_end(list_t **head, const char *str)
{

	list_t *node = *head;
	list_t *added_node;

	added_node = malloc(sizeof(list_t));

	if (!added_node || !str)
		return (NULL);

	added_node->len = _strlen(str);

	added_node->str = strdup(str);

	added_node->next = NULL;

	if (!*head)
	{
		*head = added_node;
		return (added_node);
	}

	while (node && node->next)
		node = node->next;

	node->next = added_node;

	return (added_node);
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
