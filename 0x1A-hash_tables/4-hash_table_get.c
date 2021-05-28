#include "hash_tables.h"

/**
 * hash_table_get - retrieve value of a key from a hash table
 * @ht: hash table
 * @key: key
 * Return: value of key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;

	if (!ht || !key || !key[0])
		return (NULL);

	node = ht->array[key_index((const unsigned char *)key, ht->size)];
	for (; node; node = node->next)
	{
		if (strcmp(key, node->key) == 0)
			return (node->value);
	}
	return (NULL);
}
