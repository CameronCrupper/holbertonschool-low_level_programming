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


	if (min > max)
	{
		return ('\0');
	}
	a = max - min;
	ptr = malloc(sizeof(int) * a + 1);

	if (ptr == NULL)
	{
		return ('\0');
	}
	for (b = min; b < max; b++)
	{
		ptr[b] = b;
	}

return (ptr);
}
