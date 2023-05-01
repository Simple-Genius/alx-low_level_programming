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
	listint_t *ptr, *trv;
	unsigned int l = 1;

	ptr = malloc(sizeof(listint_t));
	ptr->n = n;

	trv = *head;
	while (l < idx)
	{
		l++;
		trv = trv->next;
	}


	if (idx > l)
	{
		return (NULL);
	}


	ptr->next = trv->next;
	trv->next = ptr;


	return (ptr->next);
}
