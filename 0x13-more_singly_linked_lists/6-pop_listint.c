#include "lists.h"

/**
 *pop_listint - will delete the list's head node
 *@head: a pointer to a pointer of the head of a list
 *Return: 0 for empty list or head node's data
 */
int pop_listint(listint_t **head)
{
	int head_data;
	listint_t *temp;

	if (*head == NULL)
		return (0);
	temp = *head;
	head_data = temp->n;
	*head = temp->next;
	free(temp);
	return (head_data);
}
