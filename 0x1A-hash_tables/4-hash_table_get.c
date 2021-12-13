#include "hash_tables.h"
/**
 *hash_table_get - retrieve value associated with a key
 *@ht: hash table
 *@key: key
 *Return: NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *NN = ht->array[key_index((const unsigned char *)key, ht->size)];

	if (NN == NULL)
	{
		return (NULL);
	}
	return (NN->value);
}
