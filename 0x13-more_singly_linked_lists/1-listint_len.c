#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
*listint_len - number of elements
*@h: pointer to a list
*Return: number of elements
*/
size_t listint_len(const listint_t *h)
{
	const listint_t *ptr = h;
	int count = 0;

	if (h == NULL)
	{
		return (-1);
	}
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
