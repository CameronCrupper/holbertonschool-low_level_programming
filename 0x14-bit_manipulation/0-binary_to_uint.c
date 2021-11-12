#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
*binary_to_uint - convert binary to unsigned int
*@b: constant character
*Return: converted number
*
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int a = 0;
	int c = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (b[c] == '0' || b[c] == '1')
	{
		a <<= 1;
		a += b[c] - '0';
		c++;
	}
return (a);
}
