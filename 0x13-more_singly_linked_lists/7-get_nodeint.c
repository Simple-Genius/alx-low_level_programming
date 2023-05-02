#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * get_nodeint_at_index - a function that returns
 * the nth node of a listint_t linked list
 *
 *
 *@index: the position to get the node.
 *@head: the first node
 *
 * Return: Always 0
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr, *count;
	unsigned int p = 0, j = 0;

	if (index == 0)
	{
		return (head);
	}

	count = head;
	while (count)
	{
		j++;
		count = count->next;
	}

	if (index == j)
		return (count);

	if (index > j || head == NULL)
		return (NULL);

	ptr = head;
	while (p < index)
	{
		ptr = ptr->next;
		p++;
	}
	return (ptr);

}
