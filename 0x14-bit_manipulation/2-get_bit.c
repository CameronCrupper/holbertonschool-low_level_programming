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
	return ((index >> (n - 1)) & 1);
}
