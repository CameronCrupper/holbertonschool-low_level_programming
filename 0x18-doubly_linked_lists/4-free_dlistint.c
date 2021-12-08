#include "lists.h"
/**
 *free_dlistint - free a doubly linked list
 *@head: head of list
 */
void free_dlistint(dlistint_t *head)
{
	while (head)
	{
		dlistint_t *next = head->next;

		free(head);
		head = next;
	}
}
