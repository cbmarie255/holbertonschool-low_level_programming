#include "lists.h"

/**
 *sum_listint - will return the sume of all the data of a linked list
 *@head: pointer to the head of a linked list
 *Return: the sum or 0 for empty list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	if (head == NULL)
		return (0);
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
