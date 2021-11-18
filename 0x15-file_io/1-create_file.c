#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stddef.h>
#include <string.h>
#include "main.h"
/**
*create_file - function that creates a file
*@filename: filename
*@text_content: content in file
*Return: 1
*/
int create_file(const char *filename, char *text_content)
{
	int fo, fw;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		fo = open(" ", O_RDONLY);
	}
	if (fo == -1)
	{
		return (-1);
	}
	fo = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	fw = write(fo, text_content, strlen(text_content));
	if (fw == -1)
	{
		return (-1);
	}
	close(fo);
return (1);
}
