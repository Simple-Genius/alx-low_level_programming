#include <stdlib.h>
#include <string.h>

/**
 * add_node - a function that adds a new node at the end of a list_t
 * list
 *
 *@head: pointer to a pointer to the list_t object parameter
 *@str: the string parameter for the list_t object
 *
 * Return: Always 0
 */

list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	list_t *ptr = malloc(sizeof(list_t));

	dup = strdup(str);

	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->str = dup;
	ptr->len = strlen(dup);
	ptr->next = *head;
	*head = ptr;

	return (ptr);
}
