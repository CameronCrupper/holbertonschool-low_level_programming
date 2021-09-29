/**
*main - print alphabet 10 times
*Return: nothing else
*/
#include<stdio.h>
int main(void)
{
	int i, a;

	for (i = 0; i <= 10; i++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			putchar (a);
		}
		putchar ('\n');
	}
	return (0);
}
