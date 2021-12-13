#include "hash_tables.h"
/**
 *hash_table_delete - delete a hash table
 *@ht: hash table to delete
 *Return: nothing else
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int a;
	hash_node_t *NN;

	for (a = 0; a < ht->size; a++)
	{
		while (ht->array[a])
		{
			NN = ht->array[a]->next;
			ht->array[a] = NN;
		}
	}
ht->array = NULL;
ht->size = 0;
}
