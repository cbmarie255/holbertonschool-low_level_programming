#include "lists.h"

/**
 *free_list - will free a list_t
 *@head: pointer to the head of the list
 *Return: void, freed list
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
