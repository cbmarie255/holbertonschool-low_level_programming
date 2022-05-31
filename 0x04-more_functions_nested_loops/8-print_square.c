#include "main.h"
/**
 * print_square - will print a character in diagonal
 * @size: is the variable that will change depended on the number fed to loop
 * Return: Always 0.
 */
void print_square(int size)
{
int s;
int l;

if (size > 0)
{
for (s = 1; s <= size; s++)
{
for (l = 1; l <= size; l++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
