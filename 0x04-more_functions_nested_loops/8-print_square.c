#include "main.h"
/**
 *print_square - print a square
 *@size: size of square
 *
 */
void print_square(int size)
{
	int r;
	int c;

	if (size <= 0)
		_putchar('\n');
	for (r = 1; r <= size; r++)
	{
		for (c = 1; c <= size; c++)
		{
			_putchar('#');
		}
	_putchar('\n');
	}
}
