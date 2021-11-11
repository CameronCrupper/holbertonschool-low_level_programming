#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 *delete_nodeint_at_index - delete node at index
 *@head: ptr to a ptr to list
 *@index: index for list
 *Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *a;
	listint_t *b;
	unsigned int c;

	a = *head;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = a->next;
		free(a);
		return (-1);
	}
	for (c = 0; a != NULL && c < index - 1; c++)
	{
		a = a->next;
	}
b = a->next->next;
free(a->next);
a->next = b;
return (0);
}
