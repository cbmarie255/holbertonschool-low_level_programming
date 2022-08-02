#include "lists.h"

/**
 *print_dlistint - will print all the elements of a doubly linked list
 *@h: pointer to the head of a list
 *Return: number of nodes or NULL
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t node_count;
	const dlistint_t *temp;

	temp = h;
	for (node_count = 0; temp != NULL; node_count++)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
	return (node_count);
}
