#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *alloc_grid - prints a grid of integers
 *@width: width of the grid
 *@height: height of the grid
 *Return: nothing else
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int i;
	int y;
	int z;

	array = (int **)malloc(height * sizeof(int *));

	if (array == NULL)
	{
		free(array);
		return (NULL);
	}
	if (height <= 0)
	{
		free(array);
		return (NULL);
	}
	if (width <= 0)
	{
		free(array);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
	array[i] = (int *)malloc(width * sizeof(int));
	}
	z = 0;
	for (i = 0; i < height; i++)
	{
		for (y = 0; y < width; y++)
		{
			array[i][y] = z;
		}
	}
return (array);

}
