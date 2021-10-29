#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 *print_numbers - print however many numbers
 *@separator: string between numbers
 *@n: number of args
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int a;

	if (separator == NULL)
	{
		return;
	}
	va_start(arg, n);
	for (a = 0; a < n; a++)
	{
		printf("%d", va_arg(arg, int));
			if (a < (n - 1))
			{
				printf("%s", separator);
			}
	}
	printf("\n");
	va_end(arg);
}
