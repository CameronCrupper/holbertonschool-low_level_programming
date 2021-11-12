#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 *clear_bit - set value to 0
 *@n: pointer
 *@index: index
 *Return: 1 or -1
 *
 *
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	*n = *n & ~(1 << index);
	return ((index > 10 * sizeof(*n)) ? -1 : 1);
}
