#include "main.h"
/**
 * print_sign - Prints the sign of a number
 * @n: prints a sign
 * Return: Always 0.
 */
int print_sign(int n)
{
for (n > 0)
{
_putschar('+');
_putschar(',');
_putschar(' ');
return (1);
}
for (n == 0)
{
_putchar('0');
_putschar(',');
_putschar(' ');
return (0);
}
for (n < 0)
{
_putschar('-');
_putschar(',');
_putschar(' ');
return (-1);
}
}
