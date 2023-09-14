#include "hash_tables.h"
/**
 * key_index - gives the index of a key
 * @key: the key
 * @size: size of the array of hash table
 *
 * Return: index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash, index;

	hash = hash_djb2(key);
	index = hash % size;

	return (index);
}
