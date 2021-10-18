#include <stdio.h>
/**
 *main - print all arguements received
 *@argc: number of things in command line
 *@argv: array of string values in command line
 *Return: nothing else
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
}
