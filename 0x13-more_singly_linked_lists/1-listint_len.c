#include "lists.h"

/**
 *listint_len - returns the number of elements in a linked list
 *@h: pointer to the head node
 *Return: number of elements or NULL
 */
size_t listint_len(const listint_t *h)
{
	size_t number = 0;
	const listint_t *temp = h;

	while (temp != NULL)
	{
		number++;
		temp = temp->next;
	}
	return (number);
}
