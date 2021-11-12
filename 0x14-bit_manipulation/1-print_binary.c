#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 *print_binary - of a number
 *@n: number to print
 *
 *
 *
 */
void print_binary(unsigned long int n)
{
unsigned int a;

	for (a = 1 << 31; a > 0; a >>= 1)
	{
		if (n & a)
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
	}
}
