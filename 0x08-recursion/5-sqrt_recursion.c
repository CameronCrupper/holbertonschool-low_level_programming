#include "main.h"
/**
 *test - natural square root of a number
 *@n: int to find nat square root of
 *@a: int to check if natural
 *Return: natural square root
 */
int test(int n, int a)
{

	if (a * a == n)
	{
		return (a);
	}
	if (a * a > n)
	{
		return (-1);
	}
	return (test(n, a + 1));
}
/**
 *_sqrt_recursion - find natural square root of number
 *@n: number to find
 *Return: square root
 */

int _sqrt_recursion(int n)
{

	if (n < 0)
	{
	return (-1);
	}
	return (test(n, 1));
}
