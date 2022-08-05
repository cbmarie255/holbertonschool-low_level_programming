#include "hash_tables.h"

/**
 *hash_table_delete - will delete a hash table
 *@ht: the hash table
 *Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *deleteNode;
	unsigned long int i;

	if (ht == NULL)
		return;
	if (ht->array != NULL)
	{
		free(ht);
		return;
	}
	for (i = 0; i <= ht->size; i++)
	{
		deleteNode = ht->array[i];
		while (deleteNode != NULL)
		{
			deleteNode = deleteNode->next;
			free(deleteNode->value);
			free(deleteNode->key);
			free(deleteNode);
			ht->array[i] = deleteNode;
		}
	}
	free(ht->array);
	free(ht);
}
