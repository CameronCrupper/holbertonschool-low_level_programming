#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
 *flip_bits - number of bit from one to another
 *@n: Number
 *@m: Number
 *Return: number of bits you need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int a;
	unsigned long int b;

	b = 0;
	if (!n)
	{
		return ('\0');
	}
	if (!m)
	{
		return ('\0');
	}
	a = n ^ m;
	while (a > 0)
	{
		b = b + (a & 1);
		a = a >> 1;
	}
return (b);
}
