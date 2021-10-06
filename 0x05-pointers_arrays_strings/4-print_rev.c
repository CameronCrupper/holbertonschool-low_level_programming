#include "main.h"
/**
 *print_rev - string to print backwards
 *@s: integer
 *
 */
void print_rev(char *s)
{
	while (*s != '\0')
	{
		s++;
	}
		s--;
	while (*s != '\0')
	{
		_putchar(*s);
		s--;
	}
		_putchar('\n');

}
