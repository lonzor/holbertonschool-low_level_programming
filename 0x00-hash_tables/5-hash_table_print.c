#include "hash_tables.h"

/**
 * hash_table_print - prints hash table
 * @ht: the hash table that will be printed
 **/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *new;
	unsigned int idx;
	int sig = 0;

	if (ht == NULL)
		return;

	printf("{");

	for (idx = 0; idx < ht->size; idx++)
	{
		for (new = ht->array[idx]; new != NULL; new = new->next)
		{
			if (sig != 0)
				printf(", ");
			printf("'%s': '%s'", new->key, new->value);
			sig = 1;
		}
	}
	printf("}\n");
}
