#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


/**
 * free_listint - a function that frees a listint_t list
 *
 *
 *@head: the listint_t object
 *
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	listint_t *p;

	p = malloc(sizeof(listint_t));
	p = head;

	free(p);
}
