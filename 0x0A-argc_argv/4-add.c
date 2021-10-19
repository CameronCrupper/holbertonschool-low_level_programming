#include <stdio.h>
#include <stdlib.h>
/**
 *main - return only positive numbers added together
 *@argc: number of arguments in command line
 *@argv: array of string values in command line
 *Return: nothing else
 *
 */
int main(int argc, char *argv[])
{
	int a;
	int sum;

	if (argc > 0)
	{
		for (a = 1; a < argc; a++)
		{
			sum += atoi(argv[a]);
			printf("%d\n", sum);
		}
	}
	else if ((argc >= 'a' && argc <= 'z') || (argc >= 'A' && argc <= 'Z'))
	{
		printf("Error\n");
		return (1);
	}

return (0);
}
