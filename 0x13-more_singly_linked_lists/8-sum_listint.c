#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 *sum_listint - sum of all data
 *@head: ptr
 *Return: sum
 */
int sum_listint(listint_t *head)
{
	listint_t *a;
	int n = 0;

	a = head;
	if (a)
	{
		n = n + (a->n);
		a = a->next;
	}
return (n);
}
