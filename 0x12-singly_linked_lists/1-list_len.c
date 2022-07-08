#include "lists.h"

/**
 *list_len - will return the number of elements in a linked list
 *@h: pointer to the beginning or 'head' of linked list
 *Return: number of elements in a linked list
 */
size_t list_len(const list_t *h)
{
	size_t elements = 0;
	const list_t *temp;

	temp = h;
	while (temp)
	{
		temp = temp->next;
		elements++;
	}
	return (elements);
}
