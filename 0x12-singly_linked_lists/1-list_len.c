#include "lists.h"

/**
 * list_len - a function that returns the
 * number of elements in a linked list_t list
 *@h: the list_t object parameter
 *
 * Return: the number of elements
 */

size_t list_len(const list_t *h)
{
int v = 0;

while (h != NULL)
{
	v++;
	h = h->next;
}

	return (v);
}
