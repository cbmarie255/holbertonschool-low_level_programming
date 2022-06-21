#include "main.h"
#include <stdlib.h>

/**
 *_calloc - will return a pointer to the allocated memory
 *@nmemb: number of elements, each one with a size of size bytes
 *@size: size of int
 *Return: null or pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pointer;
	unsigned int k;

	if ((nmemb == 0) || (size == 0))
	{
		return (NULL);
	}
	pointer = malloc(nmemb * size);
	for (k = 0; k < (size * nmemb); k++)
	{
		pointer[k] = 0;
	}
	if (pointer == NULL)
	{
		return (NULL);
	}
	return (pointer);
}
