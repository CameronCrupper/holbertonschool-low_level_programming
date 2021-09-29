/**
*print_alphabet - printout lowercase alphabet
*Return: nothing else
*/
#include "main.h"
void print_alphabet(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
	_putchar(l);
	}
	_putchar('\n');
}
