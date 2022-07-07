#include "lists.h"

/**
 *print_list - will print all the elements of a list_t list
 *@h: pointer that points to the beginning, or 'head' of list
 *Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t nodeNum = 0;
	const list_t *temp;

	temp = h;
	while (temp)
	{
		if (temp->str == NULL)
		{
			printf("[0] (nil)\n");
			nodeNum++;
		}
		else
		{
			printf("[%u]", temp->len);
			nodeNum++;
			printf(" %s\n", temp->str);
		}
		temp = temp->next;
	}
	return (nodeNum);
}
