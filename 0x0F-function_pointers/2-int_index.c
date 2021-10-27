#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 *int_index - function that searches for an integer
 *@array: pointer to array
 *@size: size of array
 *@cmp: function to a pointer to compare
 *Return: -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL)
	{
		return (-1);
	}
	if (cmp == NULL)
	{
		return (-1);
	}
	if (size < 0)
	{
		return (-1);
	}
	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]))
		{
			return (a);
		}
	}
	return (-1);

}
