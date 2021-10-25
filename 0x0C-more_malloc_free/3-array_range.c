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

	a = max - min;
	ptr = malloc(sizeof(int) * a + 1);
	if (min > max)
	{
		return (NULL);
	}
	a = max - min;
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (b = min; b < max; b++)
	{
		ptr[b] = b;
	}

return (ptr);
}
