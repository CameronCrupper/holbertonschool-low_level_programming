#include "holberton.h"
/**
 *leet - replacing letters with numbers
 *@a: correct answer
 *Return: replaced letters
 *
 *
 */
char *leet(char *a)
{
	int b = 0;
	int c = 0;
	char letters[] = {"aAeEoOtTlL"};
	char numbers[] = {"4433007711"};

	while (a[b] != '\0')
	{
		while (letters[c] != '\0' && a[b] != letters[c])
		{
			c++;
		}
		if (b <= 10)
		{
			a[b] = numbers[c];
		}
		b++;
	}
	return (a);
}
