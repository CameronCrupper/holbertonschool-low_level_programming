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

	if (!ht)
		return;
	for (a = 0; a < ht->size; a++)
	{
		b = ht->array[a];
		while (b != NULL)
		{
			NN = b;
			b = NN->next;
			free(NN->key);
			free(NN->value);
			free(NN);
		}
	}
free(ht->array);
free(ht);
}
