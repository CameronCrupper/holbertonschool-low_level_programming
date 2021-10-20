#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 *str_concat - concatenate 2 strings
 *@s1: string 1
 *@s2: string 2
 *Return: concatenated strings
 */
char *str_concat(char *s1, char *s2)
{
	char *z;
	int a;
	int b;
	int c;
	int d;
	int e;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	d = strlen(s1);
	e = strlen(s2);
	c = d + e;
	z = malloc(sizeof(char) * (c + 1));
	if (z == NULL)
	{
		return (NULL);
	}
	for (a = 0; s1[a] != '\0'; a++)
	{
		z[a] = s1[a];
	}
	for (b = 0; s2[b] != '\0'; b++)
	{
		z[a] = s2[b];
		a++;
	}
	return (z);
}
