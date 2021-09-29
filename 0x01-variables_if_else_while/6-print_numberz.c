/**
*main - list from 1-10 using only putchar
*Return: nothing else
*/
#include<stdio.h>
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	putchar('\n');

	return (0);
}
