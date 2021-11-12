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
	int a;

	if (n > 1)
	{
		print_binary(n >> 1);
		_putchar((n & 1) + '0');
	}
	for (a = 1 << 10; a > 0; a >>= 1)
	{
	if (n & a)
	{
		_putchar(1);
	}
	else
	{
		_putchar(0);
	}
	}
}
