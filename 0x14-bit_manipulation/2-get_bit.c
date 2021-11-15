#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 *get_bit - value of a bit
 *@n: number
 *@index: index
 *Return: number
 *
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int a;

	a = n >> index;
	if (sizeof(n) * 10 < index)
	{
		return (-1);
	}
return (a & 1);
}
