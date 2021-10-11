#include "main.h"
/**
 *_memcpy - copy a memory area
 *@dest: area for memory to be returned
 *@src: pull memory from here
 *@n: integer to be defined
 *Return: destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		src[i] = dest[n];
	}
	return (dest);
}
