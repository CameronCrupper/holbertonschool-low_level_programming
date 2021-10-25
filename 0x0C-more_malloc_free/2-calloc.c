#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *_calloc - allocate memory for an array
 *@nmemb: unsigned int
 *@size: size of the memory
 *Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int a, b;

	b = nmemb * size;
	if (nmemb == 0)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}
	ptr = malloc(b);
	if (!ptr)
	{
		return (NULL);
	}
	for (a = 0; a < b; a++)
	{
		ptr[a] = 0;
	}


return (ptr);

}
