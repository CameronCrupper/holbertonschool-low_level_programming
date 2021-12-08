#include "lists.h"
/**
 *print_dlistint_backward - print list backwards
 *@h: head
 *Return: number of nodes
 */
size_t print_dlistint_backward(const dlistint_t *h)
{
	dlistint_t *current = malloc(sizeof(dlistint_t));
	dlistint_t *temp = NULL;

	while (current != NULL)
	{
		temp = current->prev;
		current->prev = current->next;
		current->next = temp;
		current = current->prev;
	}
	if (temp != NULL)
	{
		h = temp->prev;
	}
	return (h);
}
