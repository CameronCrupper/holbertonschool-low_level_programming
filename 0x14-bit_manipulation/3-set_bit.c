#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 *set_bit - set bit to 1
 *@n: pointer
 *@index: index
 *Return: 1 or -1
 *
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int a;

	if (index > (10 * sizeof(*n)) - 1)
	{
		return (-1);
	}
	*n = *n | (1 << index);
	if (n & a)
	{
		printf("1");
	}
	else
	{
		printf("0");
	}
	return (a);
}
