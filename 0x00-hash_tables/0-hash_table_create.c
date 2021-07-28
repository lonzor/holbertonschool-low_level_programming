#include "hash_tables.h"

/**
 * hash_tables_create - function that creates a hash tables
 * @size: size of array
 * Return: pointer to new hash tables
 **/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;
	unsigned long int i;

	if (size == 0)
		return (NULL);

	new_hash = malloc(sizeof(hash_table_t));
	if (new_hash == NULL)
		return (NULL);

	new_hash->size = size;
	new_hash->array = malloc(sizeof(hash_table_t *) * size);

	if (new_hash->array == NULL)
	{
		free(new_hash);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		new_hash->array[i] = NULL;
	return (new_hash);
}
