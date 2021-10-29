#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 *print_strings - prints string
 *@separator: string between numbers
 *@n: number of args
 */
void print_strings(const char *separator, const unsigned int n, ...)
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
		char *ptr = va_arg(arg, char*);

		if (ptr == NULL)
		{
		printf("(nil)");
		}
		else
		{
		printf("%s", ptr);
		}
		if (a < (n - 1))
		{
		printf("%s", separator);
		}
	}
	printf("\n");
	va_end(arg);
}
