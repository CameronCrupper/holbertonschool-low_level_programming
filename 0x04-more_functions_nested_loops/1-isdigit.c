#include "main.h"
#include <stdio.h>
/**
 *_isdigit - checking to see if is digit
 *@c: digit to be checked
 *Return: 1 if true 0 if not
 */
int _isdigit(int c)
{

	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
