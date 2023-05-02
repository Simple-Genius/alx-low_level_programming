#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list
 *
 *
 *@head: the listint_t object
 *
 * Return: Always 0
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr, *curr;

	curr = *head;
	while (curr != NULL)
	{
		ptr = curr;
		curr = curr->next;
		free(ptr);
	}
}

