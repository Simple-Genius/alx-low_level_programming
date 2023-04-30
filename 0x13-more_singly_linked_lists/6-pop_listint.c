#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint -  a function that deletes the head
 * node of a listint_t linked list,
 * and returns the head node’s data (n)
 *
 *
 *@head: the listint_t parameter
 *
 * Return: Always 0
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;

	if (*head == NULL)
		return (0);

	if (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		temp = NULL;
	}
	return ((*head)->n);
}
