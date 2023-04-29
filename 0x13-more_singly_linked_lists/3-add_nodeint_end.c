#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - a function that adds a
 * new node at the end of a listint_t list
 *
 *
 *@n: the integer parameter
 *@head: the start of the linked list listint_t list
 *
 * Return: Always 0
 */



listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *end;

	ptr = malloc(sizeof(listint_t));

	ptr->n = n;
	ptr->next = NULL;

	if (*head == NULL)
	{
		*head = ptr;
	}
	else
	{
		end = *head;
		while (end->next != NULL)
		{
			end = end->next;
		}
		end->next = ptr;
	}
	return (ptr);
}
