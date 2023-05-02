#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes
 * the node at index index of a listint_t linked list
 *
 *@index: the index at which the node should be deleted
 *@head: the first node
 *
 * Return: 1 or -1 if it fails
 */


int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev, *curr, *count;
	unsigned int b = 0, l = 0;

	count = *head;
	while (count)
	{
		b++;
		count = count->next;
	}

	if (index > b || *head == NULL)
	{
		return (-1);
	}

	prev = *head;
	curr = *head;

	if (index == 0)
	{
		*head = curr->next;
		free(curr);
		curr = NULL;
		return (1);
	}

	while (l < index)
	{
		l++;
		prev = curr;
		curr = curr->next;
	}

	prev->next = curr->next;
	free(curr);
	curr = NULL;
	return (1);
}
