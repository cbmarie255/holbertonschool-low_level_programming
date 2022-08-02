#include "lists.h"

/**
 *sum_dlistint - will return the sum of all data of a dlistint_t linked list
 *@head: pointer to head node
 *Return: 0 if empty, or sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum = sum + (head->n);
		head = head->next;
	}
	return (sum);
}
