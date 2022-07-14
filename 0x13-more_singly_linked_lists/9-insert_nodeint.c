#include "lists.h"

/**
 *insert_nodeint_at_index - will insert a new node at a given position
 *head: double pointer to the head of the list
 *idx: the index of the list where the new node should be added 
 *int n: node's data 
 *Return: tha address of the new node, or NULL for failure
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));
	listint_t *temp = *head;
	unsigned int index_count = 0;

	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	while (temp != NULL)
	{
		if (index_count == idx - 1)
			break;
		temp = temp->next;
		index_count++;
	}
	if (index_count < idx - 1)
		return (NULL);
	newNode->next = temp->next;
	temp->next = newNode;
	return (newNode);
}
