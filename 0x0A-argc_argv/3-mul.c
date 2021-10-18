#include <stdio.h>
#include <stdlib.h>
/**
 *main - multiply 2 numbers
 *@argc: number of arguments in command line
 *@argv: array of string values in command line
 *Return: nothing else
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	int i;
	int sum;

		for (i = 2; i < argc; i++)
		{
			sum = atoi(argv[1]) * atoi(argv[2]);
			printf("%d\n", sum);
		}

	return (0);
}
