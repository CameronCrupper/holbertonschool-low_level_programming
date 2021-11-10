#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
*print_listint - print all elements
*@h: pointer
*Return: number of elements
*/
size_t print_listint(const listint_t *h)
{
	unsigned int a = 0;
	const listint_t *ptr = h;

	while (ptr != NULL)
	{
	if (ptr == NULL)
	{
		printf("[0] (nil)\n");
		h = ptr->next;
		a++;
	}
	else
	{
		printf("%d\n", ptr->n);
		a++;
	}
	ptr = ptr->next;
	}
	return (a);
}
