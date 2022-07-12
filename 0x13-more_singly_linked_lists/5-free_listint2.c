#include "lists.h"

/**
 *free_listint2 - frees a list when a double pointer to head
 *@head: pointer, to a pointer to the head of the list
 *Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head != NULL)
	{
		while (*head != NULL)
		{			
			temp = *head;
			*head = temp->next;
			free(*head);
			*head = temp;
		}	
	}
}
