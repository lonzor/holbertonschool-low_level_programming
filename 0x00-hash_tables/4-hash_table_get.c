#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: the hash table you want to look into
 * @key: the key you are looking for
 * Return: value associated with element or NULL key can't be found
 **/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *new_node;
	unsigned int idx;

	if (key == NULL || ht == NULL || strlen(key) == 0)
		return (NULL);
	idx = key_index((const unsigned char *)key, ht->size);
	new_node = ht->array[idx];

	if (new_node == NULL)
		return (NULL);

	while (new_node != NULL)
	{
		if (strcmp(key, new_node->key) == 0)
			return (new_node->value);
		new_node = new_node->next;
	}
	return (NULL);
}
