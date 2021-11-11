#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
*add_nodeint_end - new node to end
*@head: pointer to a pointer that points
*@n: new data
*Return: address of new element
*
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *a;
	listint_t *b = *head;

	a = malloc(sizeof(listint_t));
	if (a == NULL)
	{
	return (NULL);
	}
	if (head == NULL)
	{
	free(a);
	return (NULL);
	}
	b = *head;
	a->n = n;
	a->next = NULL;
	if (*head == NULL)
	{
		*head = a;
		return (a);
	}
	while (b->next)
	b = b->next;
	b->next = a;
return (a);

}
