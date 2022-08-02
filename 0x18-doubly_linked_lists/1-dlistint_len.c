#include "lists.h"

/**
 *dlistint_len - will return the number of elements in a linked list
 *@h: pointer to the head of the list
 *Return: number of elements or NULL
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t elements;
	const dlistint_t *temp;

	temp = h;
	for (elements = 0; temp != NULL; elements++)
	{
		temp = temp->next;
	}
	return (elements);
}
