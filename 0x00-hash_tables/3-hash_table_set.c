#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table to add or update the key/value to
 * @key: the key and cannot be an empty string
 * @value: value associated with key. Must be duplicated.
 * Return: 1 on success, 0 on fail
 **/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	hash_node_t *tmp_node;
	unsigned long int idx;

	if (ht == NULL || value == NULL || key == NULL || strlen(key) == 0)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	tmp_node = ht->array[idx];

	while (tmp_node != NULL)
	{
		if (strcmp(key, tmp_node->key) == 0)
		{
			free(tmp_node->value);
			tmp_node->value = strdup(value);
			return (1);
		}
		tmp_node = tmp_node->next;
	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);

	if (new_node->value == NULL || new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}

	if (ht->array[idx] == NULL)
		new_node->next = NULL;
	else
		new_node->next = ht->array[idx];
	ht->array[idx] = new_node;
	return (1);
}
