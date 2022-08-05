#include "hash_tables.h"

/**
 *hash_table_get - will retrieve a value associated with a key
 *@ht: the hash table to check
 *@key: the key to be found
 *Return: the value associated or NULL if key is not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *getNode;

	if (ht == NULL || key == NULL)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	getNode = ht->array[index];
	if (getNode == NULL)
		return (NULL);
	while (getNode != NULL)
	{
		if (strcmp(getNode->key, key) == 0)
			return (getNode->value);
		getNode = getNode->next;
	}
	return (NULL);
}
