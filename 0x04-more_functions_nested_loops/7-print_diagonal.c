#include "main.h"
/**
 * print_diagonal - will print a character in diagonal
 * @n: is the variable that will change depended on the number fed to loop
 * Return: Always 0.
 */
void print_diagonal(int n)
{
int d;
int s;

if (n > 0)
{
for (d = 0; d < n; d++)
{
for (s = 1; s < d; s++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
