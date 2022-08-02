#include "lists.h"

/**
 *print_dlistint_backward - will print a doubly list backwards
 *@h: pointer to the head of a list
 *Return: node count or NULL
 */
size_t print_dlistint_backward(const dlistint_t *h)
{
	size_t node_count;
	const dlistint_t *temp;

	temp = h;
	if (h == NULL)
		return (0);
	for (node_count = 0; temp->next != NULL; )
	{
		temp = temp->next;
	}
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->prev;
		node_count++;
	}
	return (node_count);
}
