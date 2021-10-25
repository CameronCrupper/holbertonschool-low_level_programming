#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *malloc_checked - function that allocates memory using malloc
 *@b: int to be initialized
 *Return: nothing else
 *
 *
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = (int *)malloc(b * sizeof(char));
	if (ptr == NULL && b > 0)
	{
		exit(98);
	}
	return (ptr);
}
