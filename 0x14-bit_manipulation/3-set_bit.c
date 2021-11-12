#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 *set_bit - set bit to 1
 *@n: pointer
 *@index: index
 *
 *
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int a;


	
	a = (1 << n) | index;
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
