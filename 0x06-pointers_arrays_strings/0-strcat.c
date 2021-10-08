#include "holberton.h"
#include "strnlen.c"
/**
 *_strcat - concatenate 2 strings
 *@dest: returned string
 *@src: source string
 *Return: 2 strings together
 */
char *_strcat(char *dest, char *src)
{
	int a = _strlen(dest);
	int b = 0;

	while (src[b] != '\0')
	{
		dest[a] = dest[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
