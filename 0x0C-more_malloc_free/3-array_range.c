#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *array_range -  create an array of integers
 *@min: minimum value
 *@max: maximum value
 *Return: pointer
 */
int *array_range(int min, int max)
{
	int *ptr;
	int a, b;


	a = min - max;
	ptr = malloc(sizeof(int) * a + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	if (min > max)
	{
		return (NULL);
	}
	for (b = min; b < max; b++)
	{
		ptr[b] = b;
	}

return (ptr);
}
