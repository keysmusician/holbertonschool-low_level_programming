#include "hash_tables.h"

/**
 * hash_table_delete - delete hash table
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int ht_idx;
	hash_node_t **array, *ll_node, *next;

	if (!ht)
		return;

	array = ht->array;
	for (ht_idx = 0; ht_idx < ht->size; ht_idx++)
	{
		for (ll_node = array[ht_idx]; ll_node; ll_node = next)
		{
			next = ll_node->next;
			free(ll_node->key);
			free(ll_node->value);
			free(ll_node);
		}
	}
	free(ht->array);
	free(ht);
}
