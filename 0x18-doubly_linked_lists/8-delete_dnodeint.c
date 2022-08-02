#include "lists.h"

/**
 *delete_dnodeint_at_index - will delete a node at a given index
 *@head: double pointer to the head node
 *@index:  is the index of the node that should be deleted
 *Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *temp = NULL;

	if ((*head) == NULL || head == NULL)
		return (-1);
	temp = *head;
	if (temp == NULL)
		return (-1);
	for (i = 0; index != i && temp; i++)
	{
		temp = temp->next;
	}
	if (temp->next != NULL)
	{
		temp->next->prev = temp->prev;
	}
	if (index == 0)
		*head = temp->next;
	else
		temp->prev->next = temp->next;
	free(temp);
	return (1);
}

