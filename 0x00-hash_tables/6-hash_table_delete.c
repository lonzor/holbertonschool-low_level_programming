#include "hash_tables.h"

/**
 * hash_table_delete - deletes hash table
 * @ht: hash table that will be deleted
 **/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *trav;
	hash_node_t *temp;
	unsigned int i;

	if (ht == NULL || ht->array == NULL || ht->size == 0)
		return;

	for (i = 0; i < ht->size; i++)
	{
		for (trav = ht->array[i]; trav != NULL; trav = temp)
		{
			temp = trav->next;
			free(trav->key);
			free(trav->value);
			free(trav);
		}
	}
	free(ht->array);
	free(ht);
}
