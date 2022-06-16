#include "main.h"
#include <stdlib.h>

int **alloc_grid(int width, int height)
{
	int **pointer;
	int k = 0;
	int f = 0;

	if ((width <= 0) || (height <= 0))
		return (NULL);
	pointer = malloc(sizeof(int *) * height);
	if (pointer == NULL)
		return (NULL);
	while (k < height)
	{
		pointer[k] = malloc(sizeof(int) * width);
		if (pointer[k] == NULL)
		{
			while (k > 0)
			{
				k--;
				free(pointer[k]);
			}
			free(pointer);
			return (NULL);
		}
		k++;
	}
	for (k = 0; k < height; k++)
	{
		for (f = 0; f < width; f++)
		{
			pointer[k][f] = 0;
		}
	}
	return (pointer);
}
