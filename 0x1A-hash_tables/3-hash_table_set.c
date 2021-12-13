#include "hash_tables.h"
#include <string.h>
/**
 *hash_table_set - add an element to a hash table
 *@ht: hash table
 *@key: key
 *@value: value
 *Return: element
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *NN = malloc(sizeof(hash_node_t));
	hash_node_t *tmp = ht->array[key_index((const unsigned char *)key, ht->size)];

	if (NN == NULL)
	{
		return (0);
	}
	if (strcmp("", key) == 0)
	{
		return (0);
	}
	NN->key = strdup(key);
	NN->value = strdup(value);
	NN->next = NULL;
	if (tmp == NULL)
	{
		ht->array[key_index((const unsigned char *)key, ht->size)] = NN;
	}
	else
	{
		if (strcmp(key, tmp->key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
		}
		else
			ht->array[0] = NN;
	}
	return (1);
}
