#include "hash_tables.h"
/**
 *hash_table_delete - delete a hash table
 *@ht: hash table to delete
 *Return: nothing else
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int a;
	hash_node_t *b;
	hash_node_t *NN;

	if (ht == NULL)
	{
		return;
	}
	for (a = 0; a < ht->size; a++)
	{
		while (ht->array[a])
		{
			b = NN;
			NN = ht->array[a]->next;
			ht->array[a] = NN;
			free(b->key);
			free(b->value);
			free(b);
		}
	}
free(ht->array);
free(ht);
}
