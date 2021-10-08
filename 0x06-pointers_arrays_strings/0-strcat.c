#include "holberton.h"
#include "strlen.c"
/**
 *_strcat - concatenate 2 strings
 *@dest: returned string
 *@src: source string
 *Return: 2 strings together
 */
char *_strcat(char *dest, char *src)
{
	int i = _strlen(dest);
	int j = 0;

	while (src[j] != '\0')
	{
		dest[i] = dest[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
