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
	if (n > 1)
	{
		print_binary(n >> 1);
	}
_putchar((n & 1) + '0');
}
