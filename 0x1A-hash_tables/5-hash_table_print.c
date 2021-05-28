#include "hash_tables.h"

/**
 * hash_table_print - print all key/value pairs in a hash table
 * @ht: hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int ht_idx;
	hash_node_t *node;
	char comma = 0;

	if (!ht)
		return;

	putchar('{');
	for (ht_idx = 0; ht_idx < ht->size; ht_idx++)
	{
		for (node = ht->array[ht_idx]; node; node = node->next)
		{
			if (comma)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			comma = 1;
		}
	}
	printf("}\n");
}
