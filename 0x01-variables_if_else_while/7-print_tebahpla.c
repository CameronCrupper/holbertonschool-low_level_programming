/**
*main - listing z-a lowercase
*Return: nothing else
*/
#include<stdio.h>
int main(void)
{
	int l;

	for (l = 'z'; l >= 'a'; --l)
	{
		putchar (l);
	}
	putchar ('\n');

	return (0);
}
