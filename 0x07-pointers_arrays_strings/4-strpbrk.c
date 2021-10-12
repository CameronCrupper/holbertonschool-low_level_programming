#include "main.h"
/**
 *_strpbrk - search string for a set of bytes
 *@s: string
 *@accept: bytes
 *Return: nothing else
 *
 */
char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s != '\0')
	{
		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[a])
			{
				return (s);
			}
		}
	s++;
	}
	return (0);
}
