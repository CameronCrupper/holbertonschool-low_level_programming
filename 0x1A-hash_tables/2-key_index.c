#include "hash_tables.h"
/**
 *key_index - index of a key
 *@key: key
 *@size: size of index
 *Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int a;

	a = hash_djb2(key) % size;
	return (a);
}
