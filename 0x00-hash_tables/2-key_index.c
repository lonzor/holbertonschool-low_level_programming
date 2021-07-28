#include "hash_tables.h"

/**
 * key_index - gives the index of a key
 * @key: they key
 * @size: size of the array of the hash table
 * Return: index at the key/value pair
 **/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int kv_index;

	kv_index = hash_djb2(key);
	kv_index = index % size;

	return (kv_index);
}
