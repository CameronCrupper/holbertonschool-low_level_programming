#include <stdio.h>
/**
 *main - print the number of arguments
 *@argc: number of arguments on command line
 *@argv: array of string values in command line
 *Return: nothing else
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
