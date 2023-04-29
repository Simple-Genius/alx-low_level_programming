#include <stdio.h>
#include "lists.h"

/**
 * print_listint - a function that prints all
 * the elements of a listint_t list
 *
 *
 *@h: the listint_t object
 *
 * Return: Always 0
 */

size_t print_listint(const listint_t *h)
{
	int v = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		v++;
		h = h->next;
	}
	return (v);
}
