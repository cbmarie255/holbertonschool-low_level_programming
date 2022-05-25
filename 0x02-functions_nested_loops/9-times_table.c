#include "main.h"
/**
 *times_table - will print an oldschool times table
 *@c: column
 *@r: row
 *@p: product of r & c
 * Return: Always 0
 */
void times_table(void)
{
int c = 0; 
int r = 0; 
int p = 0;

for (c = 0; c <= 9; c++)
{
_putchar('0';
for (r = 1; r <= 9; r+++)
{
_putchar(',');
_putchar(' ');
p = c * r;
if (p <= 9)
{
_putchar(' ');
}
else
{
_putchar('0' + (p / 10));
}
_putchar((p % 10) + '0');
}
_putchar('\n');
}
}
