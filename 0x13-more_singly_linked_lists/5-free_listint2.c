#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 *free_listint2 - frees a list_t
 *@head: ptr
 */
void free_listint2(listint_t **head)
{
	listint_t *a;

	while (head == NULL)
	{
		return;
	}

	while (*head)
	{

	a = (*head)->next;
	free(*head);
	*head = a;
	}
free(a);
}
