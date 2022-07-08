#include "lists.h"

/**
 *free_list - will free a list_t
 *@head: pointer to the head of the list
 *Return: void, freed list
 */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head);
		head->next = head;
	}
}
