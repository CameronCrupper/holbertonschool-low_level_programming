#include "holberton.h"
#include "strlen.c"
/**
 *_strncat - concat a string plus some
 *@dest: string destination
 *@src: source string
 *@n: given integer
 *Return: destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = _strlen(dest);
	int b = 0;

	while (src[b] != '\0' && n--)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
