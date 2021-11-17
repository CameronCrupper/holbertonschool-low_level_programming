#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stddef.h>
#include <string.h>
#include "main.h"
/**
*append_text_to_file - appends txt to end of file
*@filename: name of file
*@text_content: content of file
*Return: nothing else
*
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fo, fw;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (-1);
	}
	fo = open(filename, O_WRONLY | O_APPEND);
	if (fo == -1)
	{
		return (-1);
	}
	fw = write(fo, text_content, strlen(text_content));
	if (fw == -1)
	{
		return (-1);
	}
return (1);
}
