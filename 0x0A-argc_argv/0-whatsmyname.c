#include <stdio.h>
/**
 *main - prints its own name
 *@argc: number of things in command line
 *@argv: array of string values in command line
 *Return: nothing else
 */
int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
