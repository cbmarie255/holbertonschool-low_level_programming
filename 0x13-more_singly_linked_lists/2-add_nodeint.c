#include "lists.h"

/**
 *add_nodeint - will add a node to the beginning of a list
 *@head: a pointer, to a pointer, to the head of a node
 *@n: new data to be added to list
 *Return: the address of the new element or NULL for failure
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = (*head);
	(*head) = newNode;
	return (newNode);
}
