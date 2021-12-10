#include "hash_tables.h"
#include <string.h>
/**
 *hash_table_create - create hash table
 *@size: size of table
 *Return: table
 *
 *
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = malloc(sizeof(hash_table_t));

	if (size < 1)
	{
		return (NULL);
	}
	if (table == NULL)
	{
		return (NULL);
	}
	table->array = (hash_node_t **)malloc(size * sizeof(hash_node_t));

	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}
	memset(table->array, 0, size * sizeof(hash_node_t));

	table->size = size;
	return (table);
}
