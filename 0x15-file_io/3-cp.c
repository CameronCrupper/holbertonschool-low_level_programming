#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stddef.h>
#include <string.h>
#include "main.h"
/**
*main - copy from one file to another
*@argc: number of arguments
*@argv:	name of files
*Return: nothing else
*
*/
int main(int argc, char *argv[])
{
	int f1, f2, fw, fc, a;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	f1 = open(argv[1], O_RDONLY);
	f2 = open(argv[2], O_RDONLY | O_CREAT | O_TRUNC, 0664);
	while (a == 1024)
	{
		a = read(f1, buf, 1024);
		if (a == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		fw = write(f2, buf, a);
		if (fw == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	fc = close(f1);
	if (fw == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f1);
		exit(100);
	}
	fc = close(f2);
	if (fc == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f2);
		exit(100);
	}
return (0);
}
