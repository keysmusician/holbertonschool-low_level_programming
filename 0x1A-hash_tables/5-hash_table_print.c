#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - print all key/value pairs in a hash table
 * @ht: hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int ht_idx;
	hash_node_t **array, *ll_node, *arr_node;
	char comma = 0;

	if (!ht)
		return;
	array = ht->array;

	putchar('{');
	for (ht_idx = 0; ht_idx < ht->size; ht_idx++)
	{
		arr_node = array[ht_idx];
		if (!arr_node)
			continue;

		if (comma)
			printf(", ");
		printf("'%s': '%s'", arr_node->key, arr_node->value);
		comma = 1;

		for (ll_node = arr_node->next; ll_node; ll_node = ll_node->next)
		{
			printf(", '%s': '%s'", ll_node->key, ll_node->value);
		}
	}
	printf("}\n");

}
