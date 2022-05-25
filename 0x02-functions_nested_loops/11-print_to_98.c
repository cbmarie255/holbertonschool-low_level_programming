#include "main.h"
#include <stdio.h>
/**
 *print_to_98 - prints numbers to 98 from start of count
 *@n: number used
 *Return: Always 0.
 */
void print_to_98(int n)
{
if (n < 98)
{
for (n = n; n <= 98; n++)
{
printf("%d, ", n)
}
}
else if (n > 98)	
{
for (n = n; n >= 98; n--)
{
printf ("%d, ", n);
}
}
printf("98\n");
}
