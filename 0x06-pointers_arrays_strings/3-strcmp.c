#include "holberton.h"
/**
 *_strcmp - compare 2 strings
 *@s1: string 1
 *@s2: string 2
 *Return: nothing else
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1)
	{
		if (*s1 != *s2)
		{
			break;
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
