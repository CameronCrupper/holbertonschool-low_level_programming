#include "holberton.h"
#include "strlen.c"
/**
 *_strncpy - copying a string
 *@dest: destination string
 *@src: source string
 *@n: integer
 *Return: nothing else
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = _strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
