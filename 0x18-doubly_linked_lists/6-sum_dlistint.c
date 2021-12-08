#include "lists.h"
/**
 *sum_dlistint - return sum of all data
 *@head: head of list
 *Return: 0 if empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
