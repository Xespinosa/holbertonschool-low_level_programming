#include "hash_tables.h"

/**
 * key_index - find the index of a key in an array
 * @size: size of array
 * @key: key to search for
 * Return: index of specific key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
