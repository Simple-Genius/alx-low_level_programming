#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - a function that
 * inserts a new node at a given position
 *
 *
 *@head: the head of the list
 *@idx: the index at which to insert the new node
 *@n: the data of the new node
 *
 * Return: the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *trv, *count;
	unsigned int l = 1, j = 0;

	count = *head;
	while (count)
	{
		j++;
		count = count->next;
	}

	if (idx > j)
		return (NULL);

	ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	if (idx == 0)
	{
		ptr->next = (*head);
		(*head) = ptr;
		return (ptr);
	}

	trv = *head;
	while (l < idx)
	{
		l++;
		trv = trv->next;
	}

	ptr->next = trv->next;
	trv->next = ptr;


	return (trv->next);
}
