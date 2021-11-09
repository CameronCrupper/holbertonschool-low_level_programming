#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
*add_node_end - new node to end
*@head: pointer to a pointer that points
*@str: new node
*Return: address of new element
*
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *a;
	list_t *b;

	a = malloc(sizeof(list_t));

	if (a == NULL)
	{
		free(a);
		return (NULL);
		b = *head;
	}
	a->str = strdup(str);
	a->len = strlen(str);
	a->next = NULL;

	if (*head == NULL)
	{
		*head = a;
		return (a);
	}

	while (b->next)
	{
	b = b->next;

	b->next = a;
	}
return (a);

}
