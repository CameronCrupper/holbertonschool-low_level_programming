#include "main.h"
/**
 *_pow_recursion - raising with power
 *@x: value to return
 *@y: power to raise to
 *Return: raised number
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
