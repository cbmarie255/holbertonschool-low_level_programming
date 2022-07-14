#include "lists.h"

/**
 *delete_nodeint_at_index - will delete a node at an index
 *@head: double pointer to head of the list
 *@index: index
 *Return: 1 for success for -1 for failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	unsigned int index_count;
	listint_t *temp2;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
		return (1);
	}
	for (index_count = 0; index_count < (index - 1); index_count++)
	{
		temp = temp->next;
		if (temp == NULL)
			return (-1);
	}
	temp2 = temp->next;
	if (temp2 == NULL)
		return (-1);
	temp->next = temp2->next;
	free(temp2);
	return (1);
}
