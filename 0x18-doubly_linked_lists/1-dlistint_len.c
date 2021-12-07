#include "lists.h"
/**
*dlistint_len - return items in list
*@h: head
*Return: items in list
*/
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *node = h;

	size_t n;

	if (h == NULL)
	{
		return (0);
	}
	for (n = 0; node != NULL; node = node->next)
	{
		n++;
	}
	return (n);
}
