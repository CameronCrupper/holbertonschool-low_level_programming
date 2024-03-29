#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 *string_nconcat - concat 2 strings
 *@s1: string 1
 *@s2: string 2
 *@n: value to be given later
 *Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int a, b, c, d, e;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	a = strlen(s1);
	b = strlen(s2);
	c = a + b;
	ptr = malloc(sizeof(char) + 1 * c);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (d = 0; d < a; d++)
	{
		ptr[d] = s1[d];
	}
	for (e = 0; e <= n; e++)
	{
		if (n >= b)
		{
			n = b;
		}
		if (e == n)
		{
			ptr[d] = '\0';
		}
		else
		{
			ptr[d] = s2[e];
			e++;
		}
	}
return (ptr);
}
