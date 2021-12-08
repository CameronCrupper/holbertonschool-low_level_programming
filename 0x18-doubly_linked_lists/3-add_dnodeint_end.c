#include "lists.h"
/**
 *add_dnodeint_end - add node at end
 *@head: head
 *@n: number
 *Return: nothing
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *NN = malloc(sizeof(dlistint_t));
	dlistint_t *last = *head;

	if (!NN)
	{
		return (NULL);
	}
	NN->n = n;
	NN->next = NULL;
	if (*head == NULL)
	{
		NN->prev = NULL;
		(*head) = NN;
		return (NN);
	}
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = NN;
	NN->prev = last;
return (NN);
}
