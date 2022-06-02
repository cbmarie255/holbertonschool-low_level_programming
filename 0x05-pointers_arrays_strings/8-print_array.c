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

for (b = 0; b < (n - 1); b++)
{
printf("%d, " , a[b]); 
}
for (b = (n - 1); b < n; b++)
{
printf("%d\n" , a[b]);
}
}
