#include "main.h"
/**
 *_strlen_recursion - return length of string with recursion
 *@s: string
 *Return: int
 *
 */
int _strlen_recursion(char *s)
{
	unsigned int a = 0;

	while (*s != '\0')
	{
		a++;
		s++;
	}
	return (a);
}
