/**
*main - print last digit of number of n
*Return: nothing else
*/
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if
	((n % 10) > 5)
	{
		printf("%d and is greater than 5", n);
	}
	else if
	((n % 10) < 6)
	{
		printf("%d and is less than 6 and not 0", n);
	}
	else
	(n % 10);
	{
		printf("%d and is 0", n);
	}
	return (0);
}
