#include "lists.h"
/**
 *sum_dlistint - return sum of all data
 *@head: head of list
 *Return: 0 if empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;
	dlistint_t *ptr = head;
	dlistint_t *next;

	while (ptr != NULL)
	{
		next = ptr->next;
		sum += ptr->n;
		ptr = next;
	}
	return (sum);
}
