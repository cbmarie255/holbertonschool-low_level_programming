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
int d1 = 0;
int d2 = 0;
for (k = 0; k < size; k++)
{
d1 += a[k][k];
d2 += a[k][size - k - 1];
}
printf("%d, %d", d1, d2);
}
