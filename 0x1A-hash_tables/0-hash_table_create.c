#include "hash_tables.h"
/**
 * hash_table_create - create a hash table function
 * @size: size of the has table
 * Return: hash table, or NULL if failed
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash;
	unsigned long int i;
	hash_node_t **array;

	hash = malloc(sizeof(hash_table_t));
	if (hash == NULL)
		return (NULL);
	array = malloc(sizeof(hash_node_t *) * size);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = NULL;
	hash->array = array;
	hash->size = size;
	return (hash);
}
