#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 *
 *
 *
 *
 *
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;
	char *dup = strdup(str);
	unsigned int b = strlen(dup);

	ptr = (list_t *)malloc(sizeof(list_t));

	if (ptr == NULL)
	{
		free(ptr->str);
		free(ptr->next);
		free(ptr);
		return (NULL);
	}
	else
	{
		ptr->str = dup;
		ptr->next = *head;
		ptr->len = b;
		*head = ptr;

	}
return (ptr);
}
