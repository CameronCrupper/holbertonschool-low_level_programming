#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 *print_name - print a name
 *@name: name to print
 *@f: function to call
 *Return: nothing else
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
	{
		return;
	}
	if (f == NULL)
	{
		return;
	}
	f(name);
}
