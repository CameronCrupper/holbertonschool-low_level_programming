/**
*main - print alphabet without e and q
*Return: return nothing else
*/
#include<stdio.h>
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		if ((ch != 'e') && (ch != 'q'))
	{
		putchar (ch);
	}
	putchar ('\n');

	return (0);
}
