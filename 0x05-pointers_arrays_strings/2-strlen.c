#include "main.h"
/**
 *_strlen - finding the length of a string
 *@s: string
 *Return: length of string
 */
int _strlen(char *s)
{
	int c = 0;

	while (*s != '\0')
	{
		c++;
		_strlen(s + 1);
	}
	return (c);
}
