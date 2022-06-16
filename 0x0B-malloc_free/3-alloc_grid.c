#include "main.h"
#include <stdlib.h>

int **alloc_grid(int width, int height)
{
	int **pointer;
	int lenwidth = 0;
	int lenheight = 0;

	if ((width <= 0) || (height <= 0))
		return (NULL);
	pointer = malloc(sizeof(int *) * height);
	if (pointer == NULL)
		return (NULL);
	for (lenwidth = 0; lenwidth < length; lenwidth++)
	{
		for (lenheight = 0; lenheight < height; lenheight++)
		{
			pointer[lenwidth][lenheight] = 0;
		}
	}
	return (pointer);
}
