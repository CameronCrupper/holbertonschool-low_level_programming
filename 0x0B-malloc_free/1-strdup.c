#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 *_strdup - return pointer which contains a copy of a string
 *@str:string
 *Return: copied string
 *
 */
char *_strdup(char *str)
{
	int a;
	int b;
	char *c;

	b = strlen(str);
	c = malloc(sizeof(char) * (b + 1));
	if (str == NULL)
	{
		return (NULL);
	}
	if (c == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < b; a++)
	{
		c[a] = str[a];
	}
	return (c);
}
