#include "lists.h"

/**
 *print_listint - will print all the elements of a list
 *@h: a pointer to the head of a node
 *Return: the number of nodes or NULL
 */
size_t print_listint(const listint_t *h)
{
	size_t number = 0;

	if (h == NULL)
		return (NULL);
	while (h != NULL)
	{
		printf("%u\n", h->n);
		h = h->next;
		number++;
	}
	return (number);
}
