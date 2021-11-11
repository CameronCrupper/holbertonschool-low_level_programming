#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 *free_listint - frees a list_t
 *@head: ptr
 */
void free_listint(listint_t *head)
{
	listint_t *a;

	while (head)
	{
		a = head;
		a = head->next;
		free(head);
		head = a;
	}
}
