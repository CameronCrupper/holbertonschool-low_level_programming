#include "main.h"
/**
*print_last_digit - last digit of any number
*@r: digit to look at
*Return: last digit of said number
*/
int print_last_digit(int r)
{
	r = r % 10;
	if (r < 0)
	{
	r = -r;
	_putchar('0' + r);
	}
	else if (r >= 0)
	{
	_putchar('0' + r);
	}

	return (r);
}
