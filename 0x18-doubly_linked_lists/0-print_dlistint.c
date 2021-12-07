#include "lists.h"
/**
 *print_dlistint - print doubly linked list
 *@h: head
 *Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *node = h;

	size_t n;

	if (h == NULL)
	{
		return (0);
	}
	for (n = 0; node != NULL; node = node->next)
	{
		printf("%d\n", node->n);
		n++;
	}
	return (n);
}
