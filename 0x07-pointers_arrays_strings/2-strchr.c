#include "main.h"
/**
 *_strchr - locate a specific character in a string
 *@s: string
 *@c: letter to start at
 *Return: rest of string
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
		return (s);
		}
	s++;
	}
	return (0);
}
