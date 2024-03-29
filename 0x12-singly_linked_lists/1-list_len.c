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

	if (h == NULL)
	{
		return (count);
	}
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
