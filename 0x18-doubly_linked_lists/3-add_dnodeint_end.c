#include "lists.h"

/**
 *add_dnodeint_end - will add a node to the end of the list
 *@head: double pointer to the head of the list
 *@n: data for each node
 *Return: new node or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));
	dlistint_t *temp;

	if (newNode == NULL)
		return (NULL);
	newNode->next = NULL;
	newNode->prev = NULL;
	newNode->n = n;
	if (head == NULL || (*head) == NULL)
	{
		(*head) = newNode;
		return (newNode);
	}
	else
	{
		temp = (*head);
		while (temp->next)
			temp = temp->next;
		newNode->prev = temp;
		temp->next = newNode;
		return (newNode);
	}
	return (NULL);
}
