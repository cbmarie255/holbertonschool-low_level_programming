#include "main.h"
/**
 * print_triangle - will print a character in a triangle
 * @size: is the variable that will change depended on the number fed to loop
 * Return: Always 0.
 */
void print_triangle(int size)
{
int l;
int t;

if (size > 0)
{
for (l = 1; l <= size; l++)
{
for (t = 1; t < l; t--)
{
_putchar(' ');
}
_putchar('#');
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
