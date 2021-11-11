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
	int b;

	while (head == NULL)
	{
		return (0);
	}

	a = *head;
	b = (*head)->n;
	*head = (*head)->next;
	return (b);

free(a);
}
