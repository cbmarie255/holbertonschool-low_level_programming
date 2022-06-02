#include "main.h"
#include <stdio.h>
/**
 *print_array - printing elements in an array
 *@a: is the reference to the array 
 *@n: is a fixed value
 *Return: always null for success
 */
void print_array(int *a, int n)
{
int b;

for (b = 0; b < n; b++)
{
printf("%d, " , a[b]);
if (b = n)
{
printf("%d" , a[b]);
}
}
printf("\n");
}
