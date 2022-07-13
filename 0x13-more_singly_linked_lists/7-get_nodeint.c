#include "lists.h"

/**
 *get_nodeint_at_index - function that finds the nth node of a linked list
 *@head: pointer to head node of list
 *@index: the index of the node starting at 0
 *Return: null if does not exist, nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int nth_node;

	for (nth_node = 0; head != NULL; nth_node++)
	{
		if (nth_node == index)
			return (head);
		head = head->next;
	}
	return (NULL);
}
