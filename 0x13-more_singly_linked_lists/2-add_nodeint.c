#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *add_nodeint - add new node
 *@head: pointer to a node
 *@n: new data
 *Return: either new element added or NULL
 *
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *a;

	a = malloc(sizeof(listint_t));
	if (head == NULL)
	{
	return (NULL);
	}
	if (a == NULL)
	{
		free(a);
		return (NULL);
	}

	a->n = n;
	a->next = *head;
	*head = a;
	return (a);
}
