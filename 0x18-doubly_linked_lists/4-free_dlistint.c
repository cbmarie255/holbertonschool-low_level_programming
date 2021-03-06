#include "lists.h"

/**
 *free_dlistint - will free the doubly linked list
 *@head: pointer to head node of the list
 *Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
