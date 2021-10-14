#include "main.h"
/**
*_abs - compute the absolute value of an integer
*Return: nothing else
*@a: number to check
*/
int _abs(int a)
{
	if (a > 0)
		return (a);
	else if (a < 0)
		return (-a);
	else
		return (0);
}
