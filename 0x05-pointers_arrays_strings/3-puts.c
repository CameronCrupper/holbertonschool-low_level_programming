#include "main.h"
/**
 *_puts - prints a string
 *@str: enter string
 *
 */
void _puts(char *str)
{
	while (*str)
	{
		str++;
		_putchar(*str);
	}
		_putchar('\n');

}
