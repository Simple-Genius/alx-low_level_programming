#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - a function that adds a new node at the end of a list_t
 * list
 *
 *@head: pointer to a pointer to the list_t object parameter
 *@str: the string parameter for the list_t object
 *
 * Return: Always 0
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node;
	list_t *ptr;
	unsigned int l = 0;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);

	while (str[l])
		l++;

	node->len = l;
	node->str = strdup(str);
	if (*head == NULL)
	{
		node->next = *head;
		*head = node;
	}
	else
	{
		node->next = NULL;
		ptr = *head;
		while (ptr->next)
			ptr = ptr->next;
		ptr->next = node;
	}
	return (node);
}
