#include "main.h"
#include <stdio.h>
/**
 *print_to_98 - prints numbers to 98 from start of count
 *@n: number used
 *Return: Always 0.
 */
void print_to_98(int n)
{
for (n = 0; n < 98; n++)
{
_putchar(n + 48);
_putchar(',');
_putchar(' ');
}
}
