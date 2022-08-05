#include "hash_tables.h"

/**
 *hash_table_print - will print a hash table
 *@ht: pointer to hash table
 *Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	int commaSpace = 0;
	hash_node_t *printNode;
	unsigned long int i;

	if (ht == NULL)
		return;
	putchar('{');
	for (i = 0; i < ht->size; i++)
	{
		printNode = ht->array[i];
		while (printNode != NULL)
		{
			if (commaSpace == 1)
				printf(", ");
			printf("'%s': '%s'", printNode->key, printNode->value);
			commaSpace = 1;
			printNode = printNode->next;
		}
	}
	printf("}\n");
}
