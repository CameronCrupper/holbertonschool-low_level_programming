#include "main.h"
/**
 *puts2 - printing only even numbers
 *@str: string to check
 *
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
	if (i % 2 == 0)
		_putchar (str[i]);
		i++;
	}
}
