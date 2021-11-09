#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 *free_list - frees a list_t
 *@head: ptr
 */
void free_list(list_t *head)
{
	list_t *a;

	while (head)
	{
	a = head;
	head = head->next;
	free(a->str);
	free(a);
	}
}
