#include "holberton.h"
/**
 *cap_string - cap all first letters of string
 *@a: string
 *Return: All first letters cap
 */
char *cap_string(char *a)
{
	int b;

	b = 0;

	while (a[b] != '\0')
	{
		if (a[b] >= 'a' && a[b] <= 'z')
		{
			if (a[b - 1] == ' ' || a[b - 1] == ',' || a[b - 1] == ';' ||
			a[b - 1] == '.' || a[b - 1] == '!' || a[b - 1] == '?' ||
			a[b - 1] == '"' || a[b - 1] == '(' || a[b - 1] == ')' ||
			a[b - 1] == '{' || a[b - 1] == '}' || a[b - 1] == '\t' ||
			a[b - 1] == '\n' || b == 0)
			{
				a[b] = a[b] - 32;
			}
		}
		b++;
	}
	return (a);
}
