#include "lists.h"

/**
 *add_nodeint_end - add will a node to the end of the list
 *@head: a pointer to a pointer of the head of the list
 *@n: new data to be added
 *Return: the address of the new element or NULL for failure
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));
	listint_t *tail = *head;

	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	else
	{
		tail = *head;
		while (tail->next != NULL)
			tail = tail->next;
		tail->next = newNode;
	}
	return (newNode);
}
