#include "main.h"
/**
 *_strspn - get length of of prefix string
 *@s: string
 *@accept: location of bytes
 *Return: length of string
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a;
	unsigned int b;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (accept[b] == s[a])
			{
				break;
			}
		}
		if (accept[b] == '\0')
		{
			return (a);
		}
	}
	return (a);
}
