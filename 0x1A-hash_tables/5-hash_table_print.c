#include "hash_tables.h"
/**
 *hash_table_print - print a hash table
 *@ht: hash table
 *Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int a;
	int flag = 0;
	hash_node_t *NN;

	printf("{");
	for (a = 0; a < ht->size; a++)
	{
		NN = ht->array[a];
		while (NN != NULL)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", NN->key, NN->value);
			flag = 1;
			NN = NN->next;
		}
	}
	if (ht == NULL)
	{
		return;
	}
	printf("}\n");
}
