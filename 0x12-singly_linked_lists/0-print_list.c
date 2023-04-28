#include "lists.h"
#include <stdio.h>


/**
 * print_list - a function that prints all the elements of a list_t list
 *
 *
 *@h: a pointer to the list_t parameter
 *
 * Return: Always 0
 */

size_t print_list(const list_t *h)
{
	unsigned int v = 0;

	while (h)
	{
		printf("[%u] ", h->len);
		if (h->str == NULL)
			printf("(nil)\n");
		else
			printf("%s\n", h->str);

		h = h->next;
		c++;
	}
	return (c);
}

