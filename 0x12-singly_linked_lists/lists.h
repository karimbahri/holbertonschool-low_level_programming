#ifndef __LINKED_L
#define __LINKED_L

/*----------------------------STRUCTS----------------------------*/

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/*----------------------------PROTOTYPES----------------------------*/

size_t print_list(const list_t *h);

#endif
