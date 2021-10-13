#include "holberton.h"
/**
 *reverse_array - reverse array
 *@a: int a
 *@n: int n
 *Return: nothing else
 */
void reverse_array(int *a, int n)
{
	int b = 0, temp = 0;

	n = n - 1;
	while (b < n)
	{
		temp = a[b];
		a[b] = a[n];
		a[n] = temp;
		b++;
		n--;
	}
}
