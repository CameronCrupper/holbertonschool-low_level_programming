#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 *array_iterator - function given as a parameter on each element of an array
 *@array: pointer to array
 *@size: size of an array
 *@action: function to a pointer
 *Return: nothing else
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array == NULL)
	{
		return;
	}
	if (action == NULL)
	{
		return;
	}
	for (a = 0; a < size; a++)
	{
		action(array[a]);
	}
}
