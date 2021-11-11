#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 *get_nodeint_at_index - returns nth node
 *@head: ptr
*@index: node index
*Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;

	while (head == NULL)
	{
		return (NULL);
	}
	if (index == 0)
	{
		return (head);
	}

	while (head)
	{

	head = head->next;
	a++;
	if (a == index)
	{
		return (head);
	}
	}
return (NULL);
}
