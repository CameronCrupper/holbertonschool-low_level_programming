#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *create_array - creates an array of chars and initializes a specific char
 *@size: size of array
 *@c: char to be initiallized
 *Return: nothing else
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int b;

	if (size == 0)
	{
		return ('\0');
	}

	a = malloc(size * sizeof(char));

	for (b = 0; b < size; b++)
	{
		a[b] = c;
	}
	free(a);
	return (a);
}
