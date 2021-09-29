/**
*main - putchar all hexidecimal numbers then letters
*Return: nothing else
*/
#include<stdio.h>
int main(void)
{
	unsigned char n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar (n);
	}
	for (n = 'a'; n <= 'f'; n++)
	{
		putchar (n);
	}
	putchar ('\n');

	return (0);

}
