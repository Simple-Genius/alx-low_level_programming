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
	int v = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] ",h->len);
			printf("%s\n", h->str);
		}
                
		v++;
		h = h->next;
	}
	printf("/n");
        return (v);
}
