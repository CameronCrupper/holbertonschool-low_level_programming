#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stddef.h>
#include "main.h"
/**
*read_textfile - reads text and prints to POSIX STDO
*@filename: files name
*@letters: number of letters it should read and print
*Return: number of letters it could read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fo, fr, fw;
	char *a;

	a = malloc(sizeof(char) * letters);

	fo = open(filename, O_RDONLY);

	if (filename == NULL)
	{
		return (0);
	}
	if (fo == -1)
	{
		return (0);
	}
	if (a == NULL)
	{
		return (0);
	}
	fr = read(fo, a, letters);
	fw = write(STDOUT_FILENO, a, fr);
	close(fo);
	free(a);
	return (fw);
}
