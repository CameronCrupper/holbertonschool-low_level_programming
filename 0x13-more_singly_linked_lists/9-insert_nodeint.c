#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 *insert_nodeint_at_index - node at index
 *@head: ptr to a ptr to list
 *@idx: index for list
 *@n: new data
 *Return: sum
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *a;
	listint_t *b;
	unsigned int c = 0;

	a = *head;
	b = malloc(sizeof(listint_t));

	if (head == NULL)
	{
		return (NULL);
	}
	if (b == NULL)
	{
		return (NULL);
	}
	b->n = n;
	if (idx == 0)
	{
		b->next = a;
		*head = b;
		return (b);
	}
	while (c < idx - 1)
	{
		if (a == NULL || a->next == NULL)
		{
			return (NULL);
		}
		a = a->next;
		c++;
	}
b->next = a->next;
a->next = b;
return (b);
}
