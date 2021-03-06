#include "lists.h"

/**
 *print_listint - will print all the elements of a list
 *@h: a pointer to the head of a node
 *Return: the number of nodes or NULL
 */
size_t print_listint(const listint_t *h)
{
	size_t number = 0;
	const listint_t *temp = h;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		number++;
	}
	return (number);
}
