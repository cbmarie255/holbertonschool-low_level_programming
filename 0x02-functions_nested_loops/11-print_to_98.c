#include "main.h"
#include <stdio.h>
/**
 *print_to_98 - prints numbers to 98 from start of count
 *@n: number used
 *Return: Always 0.
 */
void print_to_98(int n)
{
if (n <= 98)
{
for (n = n; n <= 98; n++)
{
if (n <= 9)
{
_putchar(n + 48);
_putchar(',');
_putchar(' ');
}
else 
{
_putchar((n / 10) + 48);
_putchar((n % 10) + 48);
if (n != 98)
{
_putchar(',');
_putchar(' ');
}
}
}
}
else 
{
for (n = n; n <= 98; n++)
{
if (n <= 9)
{
_putchar(n + 48);
_putchar(',');
_putchar(' ');
}
else
{
_putchar((n / 10) + 48);
_putchar((n % 10) + 48);
if (n != 98)
{
_putchar(',');
_putchar(' ');
}
}
}
}
}
