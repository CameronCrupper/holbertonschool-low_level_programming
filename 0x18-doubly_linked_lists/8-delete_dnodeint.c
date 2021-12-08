#include "lists.h"
/**
 *delete_dnodeint_at_index - delete node at index
 *@head: head of list
 *@index: index of node to be deleted
 *Return: 1 pass -1 fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int a;

	if (head == NULL || !temp)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	for (a = 0; temp != NULL && a < index - 1; a++)
	{
		temp = temp->next;
	}
	if (temp == NULL || temp->next == NULL)
	{
		return (1);
	}
	temp = temp->next;

	free(temp->next);
return (-1);
}
