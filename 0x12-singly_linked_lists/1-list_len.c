#include <stdio.h>
#include<stdlib.h>
#include "lists.h"
/**
 *list_len - prints num of elements
 *@h: ptr to list
 *Return: count
 *
 *
 */
size_t list_len(const list_t *h)
{
	const list_t *ptr = h;
	int count = 0;

	while (h != NULL)
	{
	if (ptr->next == h)
	{
		count++;
	}
	h = h->next;
	}
	return (count);
}
