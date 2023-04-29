#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - a function that adds a node
 * of a linked listint_t list
 *
 *@n: the value of integer in the node
 *@head: the listint_t object
 *
 * Return: the pointer
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
	{
		return (NULL);
	}

	ptr->n = n;
	ptr->next = *head;

	*head = ptr;

	return (ptr);

}

