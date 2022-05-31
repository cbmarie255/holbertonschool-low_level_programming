#include "main.h"
/**
 * print_line - will print an underscore for n times
 * @n: number provided by promt to run script
 * Return: Always 0 for success
 */
void print_line(int n)
{
int i;
if (n > 0)
{
for (i = 0; i < n, i++)
{
_putchar('_');
}
_putchar('\n');
}
else
{
_putchar('\n');
}
}
