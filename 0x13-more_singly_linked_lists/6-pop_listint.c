#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 *pop_listint - delete head node
 *@head: ptr to a ptr
*Return: head node or 0
 */
int pop_listint(listint_t **head)
{
	listint_t *a;
	unsigned int b;

	if (!*head)
	{
		return (0);
	}

	a = *head;
	b = (*head)->n;
	*head = (*head)->next;
	free(a);
	return (b);


}
