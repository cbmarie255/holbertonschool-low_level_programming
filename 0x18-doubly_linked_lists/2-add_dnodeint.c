#include "lists.h"

/**
 *add_dnodeint - will add a new node to the beginning of a doubly linked list
 *@head: double pointer to the head of the list
 *@n: number of nodes
 *Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));
	
	if (newNode == NULL)
		return (NULL);
	if ((*head) != NULL)
		(*head)->prev = newNode;
	newNode->n = n;
	newNode->next = (*head);
	newNode->prev = NULL;
	(*head) = newNode;
	return(*head);
}
