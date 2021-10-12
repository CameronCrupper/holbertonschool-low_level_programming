#include "main.h"
/**
 *factorial - return factorial of given number
 *@n: given number
 *Return: factorial
 */
int factorial(int n)
{
	if (n <= 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}