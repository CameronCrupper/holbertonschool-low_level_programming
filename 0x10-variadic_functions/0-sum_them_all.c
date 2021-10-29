#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 *sum_them_all - returns sum of all parameters
 *@n: to be defined
 *Return: nothing else
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	unsigned int a;
	unsigned int b;

	b = 0;
	if (n == 0)
	{
		return (0);
	}
	va_start(arg, n);
	for (a = 0; a < n; a++)
	{
	b = va_arg(arg, int) + b;
	}
	va_end(arg);

	return (b);
}
