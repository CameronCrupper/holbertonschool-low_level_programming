#include <stdio.h>
#include <stdlib.h>
#include "list.h"
/**
 *print_list - Prints list_t
 *@h: pointer
 *Return: node
 *
 */
size_t print_list(const list_t *h)
{
	unsigned int a = 0;
	const list_t *ptr = h;

	while (ptr != NULL)
	{
	if (ptr->str == NULL)
	{
		printf("%d", ptr->len);
	}
	else
	{
		printf("%d, ", ptr->len);
	}
	ptr = ptr->next;
	}
	return (a);
}
