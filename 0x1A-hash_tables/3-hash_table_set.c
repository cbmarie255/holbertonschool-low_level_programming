#include "hash_tables.h"

/**
 *hash_table_set - will add an element to the hash table
 *@ht: the hash table to add or update the key/value to
 *@key: the key that is never an empty string
 *@value: the value associated with the key the must be duplicated
 *Return: 1 if succeeded, 0 1 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	char *copy_value = NULL;
	hash_node_t  *newNode = NULL;
	unsigned long int keyJawn = 0;
	char *copy_key = NULL;
	hash_node_t *tempNode = NULL;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	else if (strlen(key) == 0)
		return (0);
	copy_value = strdup(value);
	if (copy_value == NULL)
		return (0);
	if (copy_key == NULL)
	{
		free(copy_value);
		return (0);
	}
	newNode = malloc(sizeof(hash_node_t));
	if (newNode == NULL)
	{
		free(copy_value);
		free(copy_key);
		return (0);
	}
	newNode->key = copy_key;
	newNode->value = copy_value;
	newNode->next = NULL;
	keyJawn = key_index((unsigned char *)key, ht->size);
	if ((ht->array)[keyJawn] != NULL)
	{
		tempNode = (ht->array)[keyJawn];
		while (tempNode != NULL)
		{
			if (strcmp(tempNode->key, copy_key) == 0)
			{
				free(ht->array[keyJawn]->value);
				(ht->array[keyJawn])->value = copy_value;
				free(copy_key);
				free(newNode);
				return (1);
			}
			tempNode = tempNode->next;
		}
		tempNode = (ht->array)[keyJawn];
		newNode->next = tempNode;
		(ht->array)[keyJawn] = newNode;
	}
	else
		(ht->array)[keyJawn] = newNode;
	return (1);
}
