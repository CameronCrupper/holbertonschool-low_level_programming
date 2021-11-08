#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
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
		printf("[0] (nil)\n");
		h = ptr->next;
		a++;
	}
	else
	{
		printf("[%d] %s\n", ptr->len, ptr->str);
		a++;
	}
	ptr = ptr->next;
	}
	return (a);
}
