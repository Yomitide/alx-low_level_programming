#include "hash_tables.h"
/**
 * key_index - A function to get the index of a key
 * @key: the key
 * @size: the size
 * Return: the index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (size == 0)
		return(0);
	else
		return (hash_djb2(key) % size);
}
