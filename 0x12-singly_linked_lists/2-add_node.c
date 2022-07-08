#include "lists.h"

/**
 *add_node - is a function pointer that will add a new node to list_t
 *@head: head of list_t
 *@str: pointer to string
 *Return: the address of the new element or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode = malloc(sizeof(list_t));

	if (newNode == NULL || str == NULL)
		return (NULL);
	newNode->str = strdup(str);
	newNode->len = strlen(str);
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
