#include "main.h"
/**
 *rev_string - reversing a string
 *@s: pointer
 *
 */
void rev_string(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
		_putchar('\n');
		s--;
	while (*s != '\0')
	{
		_putchar(*s);
		s--;
	}
		_putchar('\n');
}
