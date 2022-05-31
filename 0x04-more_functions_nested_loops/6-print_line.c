#include "main.h"
/**
 * print_line - will print an underscore for n times
 * @n: number provided by promt to run script
 * Return: Always 0 for success
 */
void print_line(int n)
{
int n;
while (n > 0)
{
_putchar(95 * n);
_putchar(92);
_putchar(110);
if (n <= 0)
{
_putchar(92);
_putchar(110);
}
}
_putchar('\n');
}
