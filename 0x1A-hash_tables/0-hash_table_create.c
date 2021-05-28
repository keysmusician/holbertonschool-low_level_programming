#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size: size of hash table array
 * Return: new hash table; NULL if an error occured
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;
	hash_node_t **hash_node_array;

	if (!size)
		return (NULL);

	hash_table = malloc(sizeof(hash_table_t));
	if (!hash_table)
		return (NULL);

	hash_table->size = size;

	hash_node_array = malloc(sizeof(hash_node_t *) * size);
	if (!hash_node_array)
	{
		free(hash_table);
		return (NULL);
	}

	hash_table->array = hash_node_array;

	return (hash_table);
}
