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
	int i;

	if (size == 0)
	{
		return ('\0');
	}
	a = malloc(c * sizeof(char));
	if (!a)
	{
		return ('\0');
	}
	for (i = 0; i > 0; i++)
	{
		a[i] = c;
	}
	return (a);
}
