#include "main.h"
#include <stdio.h>
/**
 *print_diagsums - will print the sums of diagonal lines
 *@a: array
 *@size: given by the prompt
 *Return: sum of diagonals
 */
void print_diagsums(int *a, int size)
{
int k;
int f;
int d1 = 0;
int d2 = 0;
	for (k = 0; k < size * size; k += size + 1)
	{
	d1 += a[k];
	}
	f = size - 1;
	for (f = size - 1; f < size * size - 1; f += size - 1)
	{
		d2 += a[f];
	}
printf("%d, %d", d1, d2);
}
