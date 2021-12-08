#include "lists.h"
/**
 *get_dnodeint_at_index - return nth node
 *@head: head of list
 *@index: index of lsit
 *Return: null
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = head;
	unsigned int a = 0;

	for (a = 0; node != NULL; node = node->next)
	{
		if (a == index)
		{
			return (node);
		}
		a++;
	}
	if (node == NULL)
	{
		return (NULL);
	}
return (NULL);
}
