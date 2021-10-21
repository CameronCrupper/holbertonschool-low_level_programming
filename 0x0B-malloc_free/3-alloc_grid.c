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

	array = (int **)malloc(height * sizeof(int *));
	for (i = 0; i < height; i++)
	{
	array[i] = (int *)malloc(width * sizeof(int));
	}
return (array);
}
