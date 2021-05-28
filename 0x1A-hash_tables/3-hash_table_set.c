#include "hash_tables.h"
#include <string.h>

/**
 * new_hash_node - create a new hash node for a hash table
 * @key: a new key
 * @value: value associated with the key
 * Return: new hash node address on success, NULL on failure
 */
hash_node_t *new_hash_node(const char *key, const char *value)
{
	hash_node_t *node;
	char *key_copy, *value_copy;

	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (NULL);

	key_copy = strdup(key);
	if (!key_copy)
	{
		free(node);
		return (NULL);
	}

	value_copy = strdup(value);
	if (!value_copy)
	{
		free(node);
		free(key_copy);
		return (NULL);
	}

	node->key = key_copy;
	node->value = value_copy;
	node->next = NULL;

	return (node);
}

/**
 * hash_table_set - add a new key/value pair to a hash table
 * @ht: hash table
 * @key: key
 * @value: value assigned to key
 * Return: 1 on success, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new;

	if (!ht || !(ht->array) || !key || !key[0] || !value)
		return (0);

	new = new_hash_node(key, value);
	if (!new)
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	if (ht->array[index])
		new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
