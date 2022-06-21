#include "main.h"
#include <stdlib.h>

/**
 *malloc_checked - will allocate memory using malloc
 *@b: 
 *Return: always 0 for success or NULL
 */
void *malloc_checked(unsigned int b)
{
	void *pointer = malloc(b * sizeof(int));

	if (pointer == NULL)
	{
		exit (98);
	}
	return (pointer);
}
