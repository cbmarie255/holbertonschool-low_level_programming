#include "lists.h"

/**
 *get_dnodeint_at_index - a function pointer that will find the nth node
 *@head: pointer to head node;
 *@index: the index of the node, starting from 0;
 *Return: nth node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	for (i = 0; head != NULL; i++)
	{
		if (i == index)
			break;
		head = head->next;
	}
	return (head);
}
