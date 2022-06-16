#include "main.h"
#include <stdlib.h>

/**
 *create_array - creates an array of chars and initializes it
 *@size: size of an array
 *@c: stores the count of k
 *Return: a pointer to the array, or NULL if fails
 */
char *create_array(unsigned int size, char c)
{
	char *pointer;
	unsigned int k;

	pointer = malloc((size) * sizeof(char));
	if ((size == 0) || (pointer == NULL))
	{
		return (NULL);
	}
	k = 0;
	while (k < size)
	{
		pointer[k] = c;
		k++;
	}
	return (pointer);
}
