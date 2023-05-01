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
	listint_t *ptr, *ptr2;
	unsigned int p = 0, len = 0;

	if (index == 0)
	{
		return (head);
	}

	ptr2 = head;
	while (ptr2 != NULL)
	{
		ptr2 = ptr2->next;
		len++;
	}

	if (index > len || head != NULL)
		return (NULL);

	while (p < index)
	{
		ptr = head->next;
		p++;
	}
	return (ptr);

}
