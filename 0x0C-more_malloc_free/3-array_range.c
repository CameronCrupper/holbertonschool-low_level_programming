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
	int a = 0;
	int b;


	if (min > max)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(int) * ((max - min) + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (b = min; b < max; b++)
	{
		ptr[b] = b;
		a++;
	}

return (ptr);
}
