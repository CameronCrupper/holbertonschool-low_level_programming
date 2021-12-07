#include "lists.h"
/**
 *add_dnodeint - add node to beginning
 *@head: head
 *@n: number
 *Return: new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{

	dlistint_t *NN = malloc(sizeof(dlistint_t));

	NN->n = n;
	NN->next = (*head);
	NN->prev = NULL;
	if (*head != NULL)
	{
		(*head)->prev = NN;
	}
	(*head) = NN;
	return (NN);
}
